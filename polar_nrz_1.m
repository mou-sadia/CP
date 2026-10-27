function [t, sig] = polar_nrz_l(bit_stream, bit_rate, amplitude)

    % --- Default Values (??? ??????? ????? ????? ??? ??? ???) ---
    if nargin < 3
        % ????? ID ???? ??????? ?????? ??? ???????
        bit_stream = [0 0 1 0 0 1 1 1 1 0 0 0]; 
        bit_rate = 4000; % 4 kbps
        amplitude = 5;
    end
    
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
            sig(start_index:end_index) = amplitude; % +V for '1'
        else
            sig(start_index:end_index) = -amplitude; % -V for '0'
        end
    end

    % --- Plotting (????????? ??? ???? ????) ---
    figure;
    plot(t, sig, 'LineWidth', 2);
    title(['Polar NRZ-L (Bit Stream: ', num2str(bit_stream), ')']);
    xlabel('Time (s)');
    ylabel('Voltage (V)');
    ylim([-amplitude*1.2 amplitude*1.2]);
    grid on;
end