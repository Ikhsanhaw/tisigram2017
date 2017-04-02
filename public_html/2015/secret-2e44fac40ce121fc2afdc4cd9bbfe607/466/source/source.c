#include <stdio.h>
#include <math.h>

int main()
{
	float Celcius,Fahrenheit;
	scanf("%f",&Celcius);
	if (Celcius>=-100 && Celcius<=100)
	Fahrenheit = Celcius*1.8+32;
	printf("%.2f\n", Fahrenheit);
	return 0;
}
