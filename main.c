
#include <stdio.h>

int main(){

	while(1==1){

		int i=0;
		for(i; i<128; i+=4){
			putchar(0);
		}
		for(i; i<=255; i+=4){
			putchar(255);
		}
	}

	return 0;

}

