#include <stdio.h>
#include <math.h>

int main(){
	float celcius, farenheit;
	scanf("%f",&celcius);
		farenheit=celcius * 1.8 + 32;
		printf("%.2f\n",farenheit);
	return 0;
}
