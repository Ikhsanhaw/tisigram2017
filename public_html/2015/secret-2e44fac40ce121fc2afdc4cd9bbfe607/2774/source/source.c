#include<stdio.h>

int main(){
	int n,ar[30][30],i,j;
	scanf("%d",&n);
	for(i=0;i<30;i++){
		for(j=0;j<30;j++){
			ar[i][j]=0;
		}
	}
	ar[0][0]=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			ar[i][j]=ar[i-1][j-1]+ar[i-1][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(j>1){
				printf(" ");
			}
			printf("%d",ar[i][j]);
		}
		printf("\n");
	}
	return 0;
}
