#include <stdio.h>

int main(){
	int a,b,i;
	scanf("%d %d",&a,&b);
	a=a+64;
	b=b+64;
	for(i=b;i>a+1;i--){
		printf("%c ",i);
	}
	printf("%c\n",a+1);
	
	return 0;
	
}
