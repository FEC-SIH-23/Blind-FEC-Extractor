num_samples=10;
fid = fopen('tpc_rate3by4_snr10_4psk.csv', 'w');
fprintf(fid, 'encoded_data,encoding\n');
N = [32;64]; 
K = [21;57];
for i=1:num_samples
msg = randi([0 1],prod(K),1);
encoded_data = tpcenc(msg,N,K);
modulated_signal = pskmod(encoded_data, 4, 0);
%disp(modulated_signal);
% AWGN addition
SNR_dB = 10;
received_signal = awgn(modulated_signal, SNR_dB, 'measured');
%disp(received_signal);
% QPSK Demodulation
demodulated_signal = pskdemod(received_signal, 4,0);
bindemod = ('0'+demodulated_signal);
disp(demodulated_signal);
fprintf(fid, '%s,2\n', bindemod);
end
%disp(length(code));
fclose(fid);
disp("Data generation completed.");
