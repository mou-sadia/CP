function dn = asc2bn(txt)
    % Convert text string to ASCII decimal values
    dec = double(txt);

    % Powers of 2 for 8-bit binary representation
    p2 = 2.^(0:-1:-7);   % [2^0, 2^-1, ..., 2^-7]

    % Convert decimal ASCII values to binary (8 bits per character)
    B = mod(floor(p2' * dec), 2);

    % Convert bytes to serial bit stream
    dn = reshape(B, 1, numel(B));
end
