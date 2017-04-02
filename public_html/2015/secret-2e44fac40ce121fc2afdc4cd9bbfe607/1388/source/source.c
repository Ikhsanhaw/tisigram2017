#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	if (b >= 0 && b <= 10 && a >= 1 && a <=100){
	c = a/b;
	printf("%d ",c);
	c = a%b;
	printf("%d\n",c);
}
	return 0;
}
