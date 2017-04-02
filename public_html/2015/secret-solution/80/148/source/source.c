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
		for(j=0;j<N-i-1;j++){
			if(strcmp(nama[j],nama[j+1])==1){
				strcpy(temp,nama[j]);
				strcpy(nama[j],nama[j+1]);
				strcpy(nama[j+1],temp);
				
			}
		}
	}
	
	for(k=0;k<N;k++){
		printf("%s",nama[k]);
		printf("\n");
		
	}

	return 0;
}
