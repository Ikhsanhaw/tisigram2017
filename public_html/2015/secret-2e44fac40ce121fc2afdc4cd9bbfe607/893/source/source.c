#include <stdio.h>

int main(){
	int T,K,P,i,j,k,tmp,temp;
	scanf("%d",&T);
	int pem[T];
	for(i=0;i<T;i++){
		pem[i]=0;
	}
	for(i=0;i<T;i++){
		tmp=0;
		scanf("%d %d",&K,&P);
		int hasil[K][P];
		for(j=0;j<K;j++){
			for(k=0;k<P;k++){
				hasil[j][k]=0;
			}
		}
		for(j=0;j<K;j++){
			for(k=0;k<P;k++){
				scanf("%d",&temp);
				hasil[j][k]=hasil[j][k]+temp;
			}
		}
		int hasil2[K];
		for(j=0;j<K;j++){
			hasil2[j]=0;
		}
		for(j=0;j<K;j++){
			for(k=0;k<P;k++){
				hasil2[j]=hasil2[j]+hasil[k][j];
			}
		}
		for(j=0;j<K;j++){
			if (hasil2[j]>tmp){
				tmp=hasil2[j];
				pem[i]=j+1;
			}
		}
	}
	for(i=0;i<T;i++){
	printf("%d\n",pem[i]);
	}
	
	return 0;
}
