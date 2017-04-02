#include <stdio.h>

int main(){
	float celcius,fahrenheit;
	scanf("%f",&celcius);
	fahrenheit = celcius * 1.8 + 32;
	printf("%.2f\n",fahrenheit);
	
	return 0;
}
