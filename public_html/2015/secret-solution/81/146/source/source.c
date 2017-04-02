#include<stdio.h>


int main(){
	int P,K,N,i,j,naik=1;
	
	scanf("%d %d %d",&P,&K,&N);
	i=0;
	j=P;
	while(i<N){
	   if(j<K){
	   	j++;
	   }else{
	   	j=0;
	   }
	    
		i++;
	}
	printf("%d\n",j);
	return 0;
}
