close all;
clc;

fs = 1000;
t0 = 0:1/fs:1;
fc = 5;
x = [2 1 2 5 2 1 4 7];

hold on;
grid on;
title('8-PSK Signal');
xlabel('Time (s)');
ylabel('Amplitude');

for i = 1:length(x)
    t = t0 + (i-1);

    if x(i) == 0
        phase = 0;
    elseif x(i) == 1
        phase = pi/4;
    elseif x(i) == 2
        phase = 3*pi/4;
    elseif x(i) == 3
        phase = pi/2;
    elseif x(i) == 4
        phase = -pi/4;
    elseif x(i) == 5
        phase = -pi/2;
    elseif x(i) == 6
        phase = pi;
    else   
        phase = -3*pi/4;
    end

    psk = sin(2*pi*fc*t + phase);
    plot(t, psk);
end
