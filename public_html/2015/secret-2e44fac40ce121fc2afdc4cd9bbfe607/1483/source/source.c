/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<string.h>
/*prototype*/
/*program utama*/
int main(){
	char A[2000], B[2000];
	int i,j,jml_hrf[2],jml_kata=0,ind;
	//scanf("%[^\n]s",A);
	//fflush(stdin);
	//scanf("%[^\n]s",B);
	gets(A);
	gets(B);
	jml_hrf[1]=0;
	jml_hrf[2]=0;
	while(A[jml_hrf[1]]!='\0'){	jml_hrf[1]++;}
	while(B[jml_hrf[2]]!='\0'){	jml_hrf[2]++;}
	for(i=0;i<jml_hrf[1];i++){
		ind=0;
		if(A[i]==B[0]){
			for(j=1;j<jml_hrf[2];j++){
				if(A[i+j]!=B[j]){ind=1;}
			}
			if(ind==0){jml_kata++;}
		}
	}
	printf("%d\n",jml_kata);
	return 0;
	
	
		
	
	
}
/*fungsi dan prosedur*/

