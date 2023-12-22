def bch_encode(message):
    # Generator polynomial coefficients for BCH(63, 56)
    generator_polynomial = [1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1]

    # Convert message to a list of integers
    message_bits = list(map(int, message))

    # Initialize shift register cells
    shift_register = [1] * 63

    # Perform systematic encoding
    for bit in message_bits:
        # XOR the feedback bits with the message bit
        feedback = shift_register[-7] ^ shift_register[-6] ^ shift_register[-2] ^ bit
        # Shift the register and set the first cell to the feedback
        shift_register = [feedback] + shift_register[:-1]

    # Output the parity bits
    parity_bits = [shift_register[0] ^ 1, shift_register[1] ^ 1, shift_register[2] ^ 1, shift_register[3] ^ 1, shift_register[4] ^ 1, shift_register[5] ^ 1, shift_register[6] ^ 1]

    # Concatenate the message and parity bits
    codeword = message_bits + parity_bits

    # Convert the codeword to a string and return
    codeword_str = ''.join(map(str, codeword))
    return codeword_str


