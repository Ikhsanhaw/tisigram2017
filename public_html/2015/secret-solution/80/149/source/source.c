#include<stdio.h>
#include<string.h>

int main(){
	
	int N,i,j,k;
	scanf("%d",&N);
	char nama[N][20],temp[20];
	for(i=0;i<N;i++){		
		scanf("%s",nama[i]);
	}
	
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(strcmp(nama[i],nama[j])==1){
				strcpy(temp,nama[i]);
				strcpy(nama[i],nama[j]);
				strcpy(nama[j],temp);
				
			}
		}
	}
	
	for(k=0;k<N;k++){
		printf("%s\n",nama[k]);
		
	}

	return 0;
}
