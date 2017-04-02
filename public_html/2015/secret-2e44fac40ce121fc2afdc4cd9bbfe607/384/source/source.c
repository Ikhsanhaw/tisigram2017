#include <stdio.h>

int main(){
	int bilangan, N,i,max;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&bilangan);
		if(i==0){
			max=bilangan;
		}else{
			if(bilangan>max){
				max=bilangan;
			}
		}
	}
	printf("%d\n",max);
	return 0;
}
