#include<stdio.h>
int main(){
	int c, x, y;
	scanf("%d",&x);
	scanf("%d",&y);
	if(x<0 || y>100){
		return 0;
	}
	if(y<0)
		y=-y;
	if(y%2==0){
		for(c=2;c<=x;c+=2)
			printf("%d",c);
	}
	else{
		for(c=1;c<=x;c+=2)
			printf("%d\n",c);
	}
	return 0;
}
