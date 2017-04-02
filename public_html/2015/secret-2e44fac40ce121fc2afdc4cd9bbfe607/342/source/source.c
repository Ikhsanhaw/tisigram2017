#include <stdio.h>
#include <math.h>

int main(){
	float celcius;
	float fahrenheit;
	
	scanf("%f", &celcius);
	fahrenheit = celcius * 1.8 + 32 ;
	
	printf("%.2f\n", fahrenheit);
	return 0;
	
}
