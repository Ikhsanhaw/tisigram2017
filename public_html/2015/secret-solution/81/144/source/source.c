#include<stdio.h>


int main(){
	int P,K,N,i,j,naik=1;
	
	scanf("%d %d %d",&P,&K,&N);
	i=0;
	j=P;
	while(i<N){
		if((j<K)&&naik==1){
			j++;
			if(j==K){
				naik=0;
			}
		}else{
			j=j-1;
			if(j==0){
				naik=1;
			}
		}
		i++;
	}
	printf("%d\n",j);
	return 0;
}
