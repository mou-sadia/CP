close all;
clc;
fs = 1000;
t0 = 0:1/fs:1;
fc = 5;
x = [2 1 2 5 2 1 4 7];

hold on;
grid on;
title('8 ASK Signal');
xlabel('Time(s)');
ylabel('Amplitude');

for i = 1:length(x)
    t = t0 + (i-1);

    if x(i) == 0
        ask= 0 * sin(2*pi*fc*t);
    elseif x(i) == 1
        ask= 1 * sin(2*pi*fc*t);
    elseif x(i) == 2
        ask= 2 * sin(2*pi*fc*t);
    elseif x(i) == 3
        ask= 3 * sin(2*pi*fc*t);
    elseif x(i) == 4
        ask= 4 * sin(2*pi*fc*t);
    elseif x(i) == 5
        ask= 5 * sin(2*pi*fc*t);
    elseif x(i) == 6
        ask= 6 * sin(2*pi*fc*t);
    else   
        ask = 7 * sin(2*pi*fc*t);
    end

    plot(t,ask);
end
