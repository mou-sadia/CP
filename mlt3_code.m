clc;
clear all;
close all;

f_analog = 1000;
analog_t = 0:1/f_analog:1-1/f_analog;
sign =60*sin(2*pi*3*analog_t)+30 * cos(2*pi*8*analog_t)+ 20*sin(2*pi*16*analog_t)

subplot(2,2,1);
plot(analog_t,sig,'b','linewidth',1.2);
xlabel('time in seconds') 
ylabel('Amplitude in volts') 
title(' Analog Signals of time domin');
xlim([0 1]);
ylim ([-120 120]);
grid on 

fftsig = fft(sig);
fftsig = fftshift(fftsig)/(f_analog/2);
f = f_analog/2 * linspace (-1 ,1 ,f_analog);

subplot(2,2,2);
stem(f ,abs(fftsig),'b','LineWidth',1.2);
xlabel('Frequency HZ'); 
ylabel('Amplitude in volts') 
title(' Analog Signals of frequency domin');
xlim([0 1]);
ylim ([0 50]);
grid on 

fs =150;
samp_t = 0.1/fs:1-1/fs;
samp_sig =60*sin(2*pi*3*samp_t)+30 * cos(2*pi*8*samp_t)+ 20*sin(2*pi*16*samp_t)

subplot(2,2,3);
stem (samp_t,samp_sig,'b','linewidth',1.2)
xlabel('time in seconds') 
ylabel('Amplitude in volts') 
title('Signals of time domin');
grid on



L=2^4 ;
delta = (max(samp_sig)- min(samp_sig))/(L-1);
quant_sign = min (samp_sig)+ round ((samp_sigmin(samp_sig))/delta)*delta;


subplot (2,2,4);
plot (samp_t,samp_sig,'0','linewidth',1.5)
grid on 
stem (analog_t,sig,'g','LineWidth',0.5);
xlabel('Time (second)');
ylabel( 'Amplitude in volts');
title ('quantized samples');


nb= log2(L);
i = round((samp_sig-min(samp_sig))/delta); 
dig_data = reshape(dig_data_matrix',1,[]); 
disp(['The index values for encoding from quantization of the sampled signal are: ',num2str(i)]) 
disp(['The converted bits from the input analog signal are: ', num2str(dig_data)]) 







