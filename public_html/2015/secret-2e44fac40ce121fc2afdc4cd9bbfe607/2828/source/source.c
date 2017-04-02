#include<stdio.h>
#include<math.h>

int main(){
	long int jml,a;
	scanf("%ld",&a);
	jml=0;
	while(a){
		jml+=a;
		jml+=a*6;
		a=floor((a*6)/20);
	}
	printf("%ld\n",jml);
	
	return 0;
}
