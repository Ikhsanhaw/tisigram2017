#include<stdio.h>
#include<string.h>
 
int main(){
	int i,x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	if(y%2){
		for(i=1;i<=x;i++){
			if(i%2){
				printf("%d\n",i);
			}
		}
	}
	else{
		for(i=1;i<=x;i++){
			if(i%2==0){
				printf("%d\n",i);
			}
		}
	}
	return 0;
}
