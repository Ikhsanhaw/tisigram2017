/*========================================================= 
Program : MaxTisigram_Reka.c  										
Nama      : REKA ALAMSYAH									
Version	  : 1.0												
Compiler  : TDM-GCC 4.9.2 64-bit Release					
============================================================ */
#include <stdio.h>

int main(){
	
	int n;
	int nilai[100];
	int i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&nilai[i]);	
	}
	
	int max=nilai[0];
	
	for(i=1;i<n;i++){
		if(nilai[i]>max){
			max=nilai[i];
		}
	}
	
	printf("%d\n",max);
	
	return 0;
	
}

