
#include <stdio.h>

#define SAMPLES_PER_SECOND 8000;
#define SAMPLE_DURATION 1.0/SAMPLES_PER_SECOND;

char WAVEFORM_SQUARE[256];
char WAVEFORM_SAWTOOTH[256];

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

	int i=0;
	for(i=0; i<256; i++){
		WAVEFORM_SAWTOOTH[i] = (char)i;
		
		if(i < 128){
			WAVEFORM_SQUARE[i] = (char)0;
		}
		else{
			WAVEFORM_SQUARE[i] = (char)255;
		}
	}



	int freq = 220;

	while(1==1){

		playWavelength(freq, 256);

	}





	return 0;

}

