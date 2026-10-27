function [t, sig] = manchester_code(bit_stream, bit_rate, amplitude)

    % --- Default Inputs ---
    if nargin < 3
        bit_stream = [0 0 1 0 0 1 1 1 1 0 0 0]; 
        bit_rate = 2000; % 2 kbps
        amplitude = 5;
    end
    
    samples_per_bit = 500;
    samples_per_half_bit = samples_per_bit / 2;
    Tb = 1 / bit_rate;
    fs = samples_per_bit / Tb;
    no_bits = length(bit_stream);
    
    t = 0:1/fs:(no_bits * Tb) - (1/fs);
    sig = zeros(1, length(t));
    
    for i = 1:no_bits
        start_index = (i - 1) * samples_per_bit + 1;
        mid_index = start_index + samples_per_half_bit - 1;
        end_index = i * samples_per_bit;
        
        if bit_stream(i) == 1 % '1' = Low-to-High (-V to +V)
            sig(start_index : mid_index) = -amplitude;
            sig(mid_index + 1 : end_index) = amplitude;
        else % '0' = High-to-Low (+V to -V)
            sig(start_index : mid_index) = amplitude;
            sig(mid_index + 1 : end_index) = -amplitude;
        end
    end

    % --- Plotting ---
    figure;
    plot(t, sig, 'LineWidth', 2);
    title(['2. Manchester (Bit Rate: ', num2str(bit_rate/1000), ' kbps)']);
    xlabel('Time (s)');
    ylabel('Voltage (V)');
    ylim([-amplitude*1.2 amplitude*1.2]);
    grid on;
end