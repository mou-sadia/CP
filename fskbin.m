close all;
clc;
f = 3;    
x = [0 1 0 0 0 1 1 0 0 1 0 0 0 1 1 0 0 0 1 0 0 1 1 0];
nx = length(x);

Ts = 1;       
t0 = 0;       
i = 1;
while i <= nx-2

    t = t0:0.001:t0+Ts;

    if x(i)==0 && x(i+1)==0 && x(i+2)==0
        fsk = sin(2*pi*1*t);
    elseif x(i)==0 && x(i+1)==0 && x(i+2)==1
        fsk = sin(2*pi*2*t);
    elseif x(i)==0 && x(i+1)==1 && x(i+2)==0
        fsk = sin(2*pi*3*t);
    elseif x(i)==0 && x(i+1)==1 && x(i+2)==1
        fsk = sin(2*pi*4*t);
    elseif x(i)==1 && x(i+1)==0 && x(i+2)==0
        fsk = sin(2*pi*5*t);
    elseif x(i)==1 && x(i+1)==0 && x(i+2)==1
        fsk = sin(2*pi*6*t);
    elseif x(i)==1 && x(i+1)==1 && x(i+2)==0
        fsk = sin(2*pi*7*t);
    else   
        fsk = sin(2*pi*8*t);
    end

    plot(t, fsk);
    hold on;
    grid on;
    axis([0 8 -1 1]);
    title('8-FSK Modulation');
    xlabel('Time (s)');
    ylabel('Amplitude');

    t0 = t0 + Ts;   
    i = i + 3;      
end
