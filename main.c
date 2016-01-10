
#include <stdio.h>

const int LENGTH = 2;




int main(){
	char waveform_square[4] = {0x00, 0x00, 0xff, 0xff};
	
	int samplesPerSecond = 8000;
	double sampleDuration = 1.0/samplesPerSecond;


	int freq = 220;
	double wavelength = 1.0/freq;

	while(1==1){
		double totalDuration =0.0;
		while( totalDuration<((1*wavelength)/4.0)){
			putchar(waveform_square[0]);
			totalDuration += sampleDuration;
		}

		while( totalDuration<((2*wavelength)/4.0)){
			putchar(waveform_square[1]);
			totalDuration += sampleDuration;
		}

		while( totalDuration<((3*wavelength)/4.0)){
			putchar(waveform_square[2]);
			totalDuration += sampleDuration;
		}

		while( totalDuration<((4*wavelength)/4.0)){
			putchar(waveform_square[3]);
			totalDuration += sampleDuration;
		}


	}





	return 0;

}

