close all;
clc;

fs = 1000;
t0 = 0:1/fs:1;
fc = 5;

% 3-bit symbols from EFG
sym = [2 1 2 5 2 1 4 7];   % decimal
A = [0 1 2 3 4 5 6 7];     % amplitudes

hold on;
grid on;
title('8-ASK Signal');
xlabel('Time (s)');
ylabel('Amplitude');

for i = 1:length(sym)
    t = t0 + (i-1);
    s = A(sym(i)+1) * sin(2*pi*fc*t);
    plot(t, s);
end
