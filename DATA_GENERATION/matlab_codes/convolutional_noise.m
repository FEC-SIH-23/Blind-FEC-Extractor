    seq_length = 1024;
    num_samples = 100000;
    demodulated_data=[];
    for i = 1:num_samples
    input_data= randi([0, 1], 1, seq_length);
    Conv_out = zeros(1, 2 * length(input_data));

    t = poly2trellis(7, [171, 133]);
    encoded_data = convenc(input_data, t);

    SNR=2;
    %disp(Conv_out)
    %BPSK Modulation
    modulated_signal = pskmod(Conv_out, 2);

    % AWGN addition
    SNR_dB=0.5;
    received_signal = awgn(modulated_signal, SNR_dB, 'measured');

    % BPSK Demodulation
    demodulated_signal = pskdemod(received_signal, 2);
    %disp(demodulated_signal);
    % Append demodulated signal to the array
    demodulated_data{i} = demodulated_signal;

  end
fid = fopen('cnv_noise_1024_snr2.csv', 'w');
for i = 1:num_samples
    fprintf(fid, '%d', demodulated_data{i}(1:end-1));  % Write all elements except the last one
    fprintf(fid, '%d,2\n', demodulated_data{i}(end));  % Write the last element and move to the next line
end
fclose(fid);
disp("data generated");

