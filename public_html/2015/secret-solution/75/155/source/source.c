#include<stdio.h>

int main(){
	int T,M,N,inKelas,i,nilaiMin;
	scanf("%d",&T);
	scanf("%d %d",&M,&N);
	inKelas =(M-N)/T;
	nilaiMin = N;
	printf("\n%d\n",inKelas);
	for(i=0;i<T;i++){
		printf("%d - %d\n",nilaiMin,nilaiMin+inKelas);
		nilaiMin=(nilaiMin+inKelas) + 1;
			
	}	
	
	return 0;
}
