function [t, sig] = polar_nrz_l(bit_stream, bit_rate, amplitude)
    samples_per_bit = 500;
    Tb = 1 / bit_rate;
    fs = samples_per_bit / Tb;
    no_bits = length(bit_stream);
    
    t = 0:1/fs:(no_bits * Tb) - (1/fs);
    sig = zeros(1, length(t));
    
    for i = 1:no_bits
        start_index = (i - 1) * samples_per_bit + 1;
        end_index = i * samples_per_bit;
        
        if bit_stream(i) == 1
            sig(start_index:end_index) = amplitude * ones(1, samples_per_bit); % +V for '1'
        else
            sig(start_index:end_index) = -amplitude * ones(1, samples_per_bit); % -V for '0'
        end
    end
end