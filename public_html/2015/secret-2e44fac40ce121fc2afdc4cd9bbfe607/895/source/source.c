/*========================================================= 
Program : SimulasiTisigram3.c  								
Nama      : REKA ALAMSYAH									
Version	  : 1.0																			
Compiler  : TDM-GCC 4.9.2 64-bit Release					
============================================================ */
#include <stdio.h>

int main(){
	int nilai1,nilai2;
	int jumlah, selisih, perkalian;
	
	scanf("%d %d",&nilai1,&nilai2);
	
	jumlah=nilai1+nilai2;
	selisih=nilai1-nilai2;
	perkalian=nilai1*nilai2;
	
	printf("%d\n",jumlah);
	printf("%d\n",selisih);
	printf("%d\n",perkalian);
}

