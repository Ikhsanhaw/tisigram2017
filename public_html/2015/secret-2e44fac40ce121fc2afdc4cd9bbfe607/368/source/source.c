#include<stdio.h>

int main()
	{
		float Celcius,Fahrenheit;
		
		scanf("%f",&Celcius);
		Fahrenheit = Celcius * 1.8 + 32;
		
		printf("%.2f\n",Fahrenheit);
		return 0;
	}
