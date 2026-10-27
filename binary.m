%% Encoding (Digital Data)

nb = log2(L); % Number of bits per sample

% index for quantization levels
i = round((samp_sig - min(samp_sig))/delta);

% convert index to binary
dig_data_matrix = de2bi(i, nb);

% convert matrix to bit stream
dig_data = reshape(dig_data_matrix',1,[]);

disp('Index values from quantization:')
disp(i)

disp('Digital data (PCM bit stream):')
disp(dig_data)