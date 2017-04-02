#include<stdio.h>
int main(){
	int q=20,x=2;
	scanf("%d",&x);
	while(1){
		if(x==1){
			printf("TRUE\n");
			break;
		}else
		if(x%2!=0){
			printf("FALSE\n");
			break;
		}else{
			x/=2;
		}
	}
	return 0;
}
