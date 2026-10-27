function [t, sig] = differential_manchester_code(bit_stream, bit_rate, amplitude)
    samples_per_bit = 500;
    samples_per_half_bit = samples_per_bit / 2;
    Tb = 1 / bit_rate;
    fs = samples_per_bit / Tb;
    no_bits = length(bit_stream);
    
    t = 0:1/fs:(no_bits * Tb) - (1/fs);
    sig = zeros(1, length(t));
    
    % Initial State: Assume the signal starts High (+amplitude) before the first bit.
    % We track the level at the *start* of the current bit period. 
    % Let's start with +V. This means the previous transition ended with -V.
    start_level = amplitude; 
    
    for i = 1:no_bits
        start_index = (i - 1) * samples_per_bit + 1;
        mid_index = start_index + samples_per_half_bit - 1;
        end_index = i * samples_per_bit;
        
        if bit_stream(i) == 0 
            % '0' = Transition at the start of the bit period (Start level must invert)
            start_level = -start_level;
        % else (if bit_stream(i) == 1): '1' = No transition at the start (start_level remains the same)
        end
        
        % Step 1: Set the first half (level defined by the start transition rule)
        sig(start_index : mid_index) = start_level;
        
        % Step 2: Set the second half (always inverts the first half for synchronization)
        sig(mid_index + 1 : end_index) = -start_level;
        
        % Update start_level for the next iteration (The start of the next bit 
        % will be the level at the end of the current bit, which is -start_level)
        start_level = -start_level; 
    end
end