
#include <stdio.h>

const int LENGTH = 2;




int main(){
	char waveform_square[2] = {0x00, 0xff};
	
	int samplesPerSecond = 8000;
	double sampleDuration = 1.0/samplesPerSecond;


	int freq = 220;
	double wavelength = 1.0/freq;

	while(1==1){
		double totalDuration =0.0;
		while( totalDuration<(wavelength/2.0)){
			putchar(waveform_square[0]);
			totalDuration += sampleDuration;
		}
		while( totalDuration<(wavelength/1.0)){
			putchar(waveform_square[1]);
			totalDuration += sampleDuration;
		}
	}





	return 0;

}

