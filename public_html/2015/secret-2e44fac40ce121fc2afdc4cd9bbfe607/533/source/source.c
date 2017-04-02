 #include <stdio.h>
 #include <math.h>
 
 int main() {
 	/* Kamus data */
 	float celcius;
 	float fahrenheit;
 	/* Algoritma */
 	
 	scanf("%f", &celcius);
 	if (celcius >= -100 && celcius <= 100)
	 {
	 	fahrenheit = (celcius * 1.8) + 32;
	 	printf("%.2f\n", fahrenheit);
	 }
 	return 0;
 	
 	
 }
