#include <stdio.h>

int main(){
	int n,jml;
	
	scanf("%d",&n);
	
	jml = (n / 10000) + ((n % 10000)/1000) + (((n % 10000)%1000)/100) +  ((((n % 10000)%1000)%100)/10) + ((((n % 10000)%1000)%100)%10);
	printf("%d\n",jml);
	return 0;
}
