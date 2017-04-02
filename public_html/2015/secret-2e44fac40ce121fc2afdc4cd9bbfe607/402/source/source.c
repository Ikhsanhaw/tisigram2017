#include <stdio.h>

int main(){
	int j,k,i,N[101],maks;
	
	scanf("%d",&i);
	for(j=0;j<i;j++){
		scanf("%d",&N[j]);
	}
	maks=N[0];
	for(k=1;k<i;k++){
		if(maks<N[k]){
			maks=N[k];
		}
	}
	printf("%d\n",maks);
	return 0;
}
