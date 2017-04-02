#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	if (a >= 0 && a <= 10 && b >= 1 && b <=100){
	c = a/b;
	printf("%d ",c);
	c = a%b;
	printf("%d\n",c);
}
	return 0;
}
