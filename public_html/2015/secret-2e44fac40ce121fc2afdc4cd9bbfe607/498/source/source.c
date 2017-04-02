/*
Program 	 	 : F_BilTerbesardariN.c
Deskripsi 	 	 : 
Author           : Ujang Wahyu 
Compiler         : Dev-C++ 5.11
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
int main(){
	int i,bil;
	int max,n;
	scanf("%d",&n);
	scanf("%d", &bil);
	max=bil;
	for (i=1;i<n;i++){
		scanf("%d", &bil);
		if(max<bil){
			max=bil;
		}	
	}
	printf("%d\n",max);
return 0;
}
