#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	unsigned long long int angka;
	scanf("%lld",&angka);
	unsigned long long int res = angka % 2 ;
	printf("%lld\n",res);
	return 0;
}

