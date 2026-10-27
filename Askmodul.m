clc;
clear all;
close all;

% Parameters based on ID: 23-54976-3 (F=7, G=6)
a = [8 10 9 11];
f = [11 13 7 8];
time_duration = 0.5;

%% Analog Signal Generation
analog_t = 0:0.0001:time_duration;
analog_sig = a(1)*sin(2*pi*f(1)*analog_t) + a(2)*cos(2*pi*f(2)*analog_t) + ...
             a(3)*sin(2*pi*f(3)*analog_t) + a(4)*sin(2*pi*f(4)*analog_t);

%% Sampling
fs = 150; % Sampling frequency
samp_t = 0:1/fs:time_duration;
samp_sig = a(1)*sin(2*pi*f(1)*samp_t) + a(2)*cos(2*pi*f(2)*samp_t) + ...
           a(3)*sin(2*pi*f(3)*samp_t) + a(4)*sin(2*pi*f(4)*samp_t);

%% Quantization
L = 16; % Quantization Levels
delta = (max(samp_sig) - min(samp_sig))/(L-1);
quant_sig = min(samp_sig) + round((samp_sig-min(samp_sig))/delta)*delta;

%% Plotting
figure;

% 1. Analog Signal
subplot(3,1,1);
plot(analog_t, analog_sig,'b','LineWidth',1.5);
title('Analog Signal');
ylabel('Amplitude');
grid on;

% 2. Sampled Signal
subplot(3,1,2);
stem(samp_t, samp_sig,'b','LineWidth',1,'MarkerFaceColor','b');
title('Sampled Signal');
ylabel('Amplitude');
grid on;

% 3. Quantized Signal (Staircase)
subplot(3,1,3);
stairs(samp_t, quant_sig,'b','LineWidth',1.5);
title('Quantized Signal');
ylabel('Amplitude');
xlabel('Time (s)');
grid on;