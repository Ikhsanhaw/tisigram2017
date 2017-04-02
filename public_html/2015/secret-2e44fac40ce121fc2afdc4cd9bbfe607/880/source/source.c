/*========================================================= 
Program : SimulasiTisigram2.c  								
Nama      : REKA ALAMSYAH									
Version	  : 1.0																			
Compiler  : TDM-GCC 4.9.2 64-bit Release					
============================================================ */
#include <stdio.h>

int main(){
	int pasukanS,pasukanM;
	
	scanf("%d",&pasukanS);
	scanf("%d",&pasukanM);
	
	if(pasukanM<=pasukanS*2){
		printf("PERANG\n");
	}else{
		printf("MUNDUR\n");
	}
}

