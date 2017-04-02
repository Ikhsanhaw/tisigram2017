/*Program        : EncodeCP3B.c          */
/* Nama          : Muhammad Eldi Pratama */
/* Tanggal/Versi : 24 Des 2016/Ver1.0    */
/* Compiler      : Dev-C++ 5.11          */

#include <stdio.h>

main(){
	int A,B,H,i=0,check;
	
	scanf("%d %d %d",&A,&B,&H);
	check=-H;
	while(check<0 && A>B){
		check=check+A-B;
		i=i+1;}
	
	if(i!=0)
		printf("%d\n",i);
		else printf("mustahil\n");
		
	return 0;
}

