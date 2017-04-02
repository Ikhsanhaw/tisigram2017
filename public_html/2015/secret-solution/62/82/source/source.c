/*
- PELUANG -
Author 	: Arief Subagja
Date	: 28 March 2016
*/


#include <stdio.h>

long int faktorial(int N);


int main()

{

long int hasil;

int x,y;
scanf("%d\n",&x);
scanf("%d\n",&y);


if (x<y) {
	hasil =0;
	printf("%d\n",hasil);
} 

else {
	hasil = faktorial(x)/(faktorial(y) * faktorial(x-y));
	printf("%ld\n",hasil);
}

}

long int faktorial(int N)
{
long int F;

if (N<=1)
{
	return(1);
} 
else 
{
	F = N * faktorial(N-1);
	return(F);
}

}