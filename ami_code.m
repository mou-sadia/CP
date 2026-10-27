function [t, sig] = ami_code(bit_stream, bit_rate, amplitude)

    % --- Default Inputs ---
    if nargin < 3
        bit_stream = [0 0 1 0 0 1 1 1 1 0 0 0]; 
        bit_rate = 5000; % 5 kbps
        amplitude = 5;
    end

    samples_per_bit = 500;
    Tb = 1 / bit_rate;
    fs = samples_per_bit / Tb;
    no_bits = length(bit_stream);
    
    t = 0:1/fs:(no_bits * Tb) - (1/fs);
    sig = zeros(1, length(t));
    
    pulse = amplitude; % Tracks the current pulse polarity (+V or -V)
    
    for i = 1:no_bits
        start_index = (i - 1) * samples_per_bit + 1;
        end_index = i * samples_per_bit;
        
        if bit_stream(i) == 1
            sig(start_index:end_index) = pulse;
            pulse = -pulse; % Invert pulse for the next '1'
        else
            sig(start_index:end_index) = 0; % '0' is 0V
        end
    end

    % --- Plotting ---
    figure;
    plot(t, sig, 'LineWidth', 2);
    title(['3. AMI (Bit Rate: ', num2str(bit_rate/1000), ' kbps)']);
    xlabel('Time (s)');
    ylabel('Voltage (V)');
    ylim([-amplitude*1.2 amplitude*1.2]);
    grid on;
end