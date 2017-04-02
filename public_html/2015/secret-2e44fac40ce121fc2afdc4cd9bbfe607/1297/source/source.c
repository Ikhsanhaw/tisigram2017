#include<stdio.h>
int main(){
	int x,lim,c,i;
	scanf("%d",&x);lim=1;
	while(x--){
		lim*=2;
	}
	for(i=1;i<=lim-1;i++){
		c=i;
		if(i%2!=0)printf("*\n");else
		{
			while(c%2==0){
				
					printf("*");
					c/=2;
				
			}
			printf("*\n");
		
		}
	}
	return 0;
}
