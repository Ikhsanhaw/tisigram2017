#include <stdio.h>

int main(){
	int a,b,h,jml = 0,ket = 0;
	scanf("%d %d %d",&a,&b,&h);
	
	if(b > a) {
		printf("mustahil");
	}
	else{
		
		while(ket < h ){
			ket = ket + a;
			ket = ket - b;
			jml++;
		}
		
		printf("%d",jml);
	}
	
	printf("\n");
	return 0;
}
