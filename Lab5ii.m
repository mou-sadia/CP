% Task5ii.m
clc
clear all
close all

% 1. Derive the 12-Bit Stream from ID (E=2, F=7, G=8)
% Bit Stream: 0010 0111 1000
bit_stream = [0 0 1 0 0 1 1 1 1 0 0 0];
no_bits = length(bit_stream);
amplitude = 5; % Voltage Amplitude (+5V, -5V)

% Create a figure window for all five plots
figure('Name', 'ID Line Coding Schemes');

% --- 1. Polar NRZ-L (4 kbps) ---
subplot(5, 1, 1);
bit_rate_nrz = 4000;
[t_nrz, sig_nrz] = polar_nrz_l(bit_stream, bit_rate_nrz, amplitude);
plot(t_nrz, sig_nrz, 'LineWidth', 2);
title(['1. Polar NRZ-L (Bit Rate: ', num2str(bit_rate_nrz/1000), ' kbps)']);
ylabel('Voltage (V)');
ylim([-amplitude*1.2 amplitude*1.2]);
grid on;

% --- 2. Manchester (2 kbps) ---
subplot(5, 1, 2);
bit_rate_man = 2000;
[t_man, sig_man] = manchester_code(bit_stream, bit_rate_man, amplitude);
plot(t_man, sig_man, 'LineWidth', 2);
title(['2. Manchester (Bit Rate: ', num2str(bit_rate_man/1000), ' kbps)']);
ylabel('Voltage (V)');
ylim([-amplitude*1.2 amplitude*1.2]);
grid on;

% --- 3. AMI (5 kbps) ---
subplot(5, 1, 3);
bit_rate_ami = 5000;
[t_ami, sig_ami] = ami_code(bit_stream, bit_rate_ami, amplitude);
plot(t_ami, sig_ami, 'LineWidth', 2);
title(['3. AMI (Bit Rate: ', num2str(bit_rate_ami/1000), ' kbps)']);
ylabel('Voltage (V)');
ylim([-amplitude*1.2 amplitude*1.2]);
grid on;

% --- 4. MLT-3 (10 kbps) ---
subplot(5, 1, 4);
bit_rate_mlt3 = 10000;
[t_mlt3, sig_mlt3] = mlt3_code(bit_stream, bit_rate_mlt3, amplitude);
plot(t_mlt3, sig_mlt3, 'LineWidth', 2);
title(['4. MLT-3 (Bit Rate: ', num2str(bit_rate_mlt3/1000), ' kbps)']);
ylabel('Voltage (V)');
ylim([-amplitude*1.2 amplitude*1.2]);
grid on;

% --- 5. Differential Manchester (2 kbps) ---
subplot(5, 1, 5);
bit_rate_dman = 2000;
[t_dman, sig_dman] = differential_manchester_code(bit_stream, bit_rate_dman, amplitude);
plot(t_dman, sig_dman, 'LineWidth', 2);
title(['5. Differential Manchester (Bit Rate: ', num2str(bit_rate_dman/1000), ' kbps)']);
xlabel('Time (s)');
ylabel('Voltage (V)');
ylim([-amplitude*1.2 amplitude*1.2]);
grid on;