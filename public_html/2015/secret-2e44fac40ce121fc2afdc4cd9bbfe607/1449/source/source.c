/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

/*prototype*/
void quicksort(int *A, int kiri, int kanan);
/*program utama*/
int main(){
	int A,i,j;
	scanf("%d",&A);
	int B[A],C[A],min,maks;
	int D[100][1000], E[100][1000];
	for(i=0;i<A;i++){
		scanf("%d %d",&B[i],&C[i]);
		for(j=0;j<B[i];j++){
			scanf("%d",&D[i][j]);
		}
		maks=B[i];
		quicksort(D[i],0,maks);
		for(j=0;j<C[i];j++){
			scanf("%d",&E[i][j]);
		}
	}
	for(i=0;i<A;i++){
		min=1;
		maks=B[i];
		for(j=0;j<C[i];j++){
			if(E[i][j]==0){
				printf("%d",D[i][min]);
				min++;
			}
			else{
				printf("%d",D[i][maks]);
				maks--;
			}
			if(j!=C[i]-1){
				printf(" ");
			}
			else{
				printf("\n");
			}
		}
	}
}
/*fungsi dan prosedur*/
void quicksort(int *A,int kiri,int kanan){
	int tmp,i=kiri,j=kanan;
	int pivot=A[(kiri+kanan)/2];
	while(i<=j){
		while(A[i]<pivot){
			i++;
		}
		while(A[j]>pivot){
			j--;
		}
		if(i<=j){
			tmp=A[i];
			A[i]=A[j];
			A[j]=tmp;
			i++;	
			j--;
		}
	}
	if(kiri<j){
		quicksort(A,kiri,j);
	}
	if(i<kanan){
		quicksort(A,i,kanan);
	}
}
