#include <stdio.h>

int main(){
	float c, fahrenheit;
	
	scanf("%f",&c);
	fahrenheit = c * 1.8 + 32;
	printf("%.2f\n", fahrenheit);
	
	return 0;
}
