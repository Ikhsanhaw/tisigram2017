#include <stdio.h>

int main(){
	int a,b,h,jml = 0,ket = 0;
	scanf("%d %d %d",&a,&b,&h);
	
	if(b > a) {
		printf("mustahil");
	}
	else{
		jml = h / (a - b);
		if(h % (a - b) > 0){
			jml++;
		}
		printf("%d",jml);
	}
		printf("\n");
		return 0;
}
