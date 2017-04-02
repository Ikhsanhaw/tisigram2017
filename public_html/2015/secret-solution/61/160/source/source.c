#include <stdio.h>
 
int main(){
	int i,X,ins;
	scanf("%d\n%d",&X,&ins);
	if (ins % 2 == 0) {
		for (i=1;i<=X;i++){
			if(i%2==0){
				printf("%d\n",i);			
			}
			
		}
	}else{
		for (i=1;i<=X;i++){
			if(i%2!= 0) {
				printf("%d\n",i);
			
			}
			
		}
	}
	return 0;
}
