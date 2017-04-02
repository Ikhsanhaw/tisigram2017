#include <stdio.h>

int main(){
	int bilangan[100], i,j, N,temp;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&bilangan[i]);
	}
	for(j=0;j<N;j++){
		for(i=0;i<N-(j-1);i++){
			if(bilangan[i]<bilangan[i+1]){
				temp = bilangan[i];
				bilangan[i] = bilangan[i+1];
				bilangan[i+1] = temp;
			}
		}
	}
	printf("%d\n",bilangan[i]);
	return 0;
}
