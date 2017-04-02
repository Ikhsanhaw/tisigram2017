#include <stdio.h>

int main(){
	int a,b,i;
	scanf("%d %d",&a,&b);
	a=a+64;
	b=b+64;
	
	if(a==b){
		printf("%c\n",b);
	}
	for(i=b;i>a;i--){
		printf("%c ",i);
		if(i==a){
			printf("%c\n",i);
		}
	}
	return 0;
	
}
