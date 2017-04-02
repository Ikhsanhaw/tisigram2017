#include <stdio.h>

int main(){
	int x,y,carry,sum;
	scanf("%d %d",&x,&y);
	printf("%d\n",x+y);
	int lastCarry = 0;
	do {
		sum = (x%10) + (y%10) ;
		carry = sum / 10 ;
		printf("%d %d\n",sum % 10 + lastCarry, carry);
		lastCarry = carry;
		x = (x / 10); y = y / 10;
	} while ( (x!= 0 || y!= 0) && (carry != 0) );
	
	return 0;
}