#include<stdio.h>
int main()
{
	int b=0,a=0;
	scanf("%d",&a);
	do{
		if(a%2==0){
			a=a/2;
			if(a==1){
				printf("TRUE\n");
				b=1;
			}
		}else{
			printf("FALSE\n");
			b=1;
		}
	}while(b!=1);
	return 0;
}
