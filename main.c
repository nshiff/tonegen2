
#include <stdio.h>

#define SAMPLES_PER_SECOND 8000;
#define SAMPLE_DURATION 1.0/SAMPLES_PER_SECOND;

char WAVEFORM_SQUARE[4] = {0x00, 0x00, 0xff, 0xff};


void playWavelength(int frequency, int numberOfSamplesInWavelength){
	double wavelength = 1.0/frequency;
	double totalDuration =0.0;
	int i=0;
	for(i=0; i<numberOfSamplesInWavelength; i++){
		while( totalDuration<(((i+1)*wavelength)/numberOfSamplesInWavelength)){
			putchar(WAVEFORM_SQUARE[i]);
			totalDuration += SAMPLE_DURATION;
		}
	}

}


int main(){

	int freq = 220;

	while(1==1){

		playWavelength(freq, 4);

	}





	return 0;

}

