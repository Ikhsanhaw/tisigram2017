#include <stdio.h>

int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d\n",x+y);
	do {
		int sum = (x%10) + (y%10) ;
		int carry = sum / 10 ;
		printf("%d %d\n",sum % 10, carry);
		x = (x / 10) + carry ; y = y / 10;
	} while (x!= 0 || y!= 0);
	
	return 0;
}