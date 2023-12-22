% Define the parameters for your Turbo code
blockLength = 1784; % Block length (adjust as needed)
bitRates = [1/2, 1/3, 1/4, 1/6]; % Set of available bit rates
constraintLength = 4; % Constraint length
numSamples = 100000; % Number of samples to generate
%numSamples = 1;
SNR = 2;  % Desired SNR in dB
label = 1; 

% Initialize a cell array to store the encoded bits
encodedStrings = cell(numSamples, 1);

% Define the desired length of the encoded strings (2048)
desiredLength = 2048;

% Loop to generate encoded strings
for sample = 1:numSamples
    % Randomly choose one of the available bit rates
    selectedBitRate = bitRates(randi(length(bitRates)));

    % Create a TurboEncoder object with the compatible trellis structure
    trellis = poly2trellis(constraintLength, [13 15]);

    % Calculate the required interleaver indices based on block length
    interleaverIndices = randperm(blockLength);

    % Create a TurboEncoder object with the correct trellis structure and interleaver indices
    turboEncoder = comm.TurboEncoder('TrellisStructure', trellis, 'InterleaverIndices', interleaverIndices);

    % Generate some random input data (binary) with the same block length
    inputData = randi([0 1], 1, blockLength);

    % Encode data with the TurboEncoder
    encodedData = turboEncoder(inputData');

    modulatedSignal = pskmod(encodedData, 2);

    receivedSignal = awgn(modulatedSignal, SNR);  % Received signal with AWGN

    demodulatedData = pskdemod(receivedSignal, 2);  % Demodulate the received signal

    % Convert the encoded bits into a binary string
    binaryString = char('0' + demodulatedData');

    % Ensure the binary string is of the desired length by adding padding bits on the right
    if length(binaryString) < desiredLength
        % Calculate the number of padding bits needed
        numPaddingBits = desiredLength - length(binaryString);

        % Generate padding bits (zeros)
        paddingBits = repmat('0', 1, numPaddingBits);

        % Concatenate padding bits to the binary string
        paddedString = [binaryString, paddingBits];
    else
        % Trim to the desired length
        paddedString = binaryString(1:desiredLength);
    end

    % Store the encoded binary string
    encodedStrings{sample} = {paddedString,label};


    % Display progress (optional)
    if mod(sample, 1000) == 0
        disp(['Generated ', num2str(sample), ' encoded strings...']);
    end
end


% Define the output file name
outputFileName = 'turbo_encoded_noise_1784_to_2048_snr2.csv';

encodedTable = cell2table(encodedStrings);
writetable(encodedTable, outputFileName);

% writecell(encodedStrings, outputFileName);


disp(['Encoded data for ', num2str(numSamples), ' samples has been saved to "', outputFileName, '".']);
