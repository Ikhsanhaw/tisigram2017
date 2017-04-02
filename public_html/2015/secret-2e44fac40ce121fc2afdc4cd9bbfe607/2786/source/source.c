/*Program        : EncodeCP3C.c          */
/* Nama          : Muhammad Eldi Pratama */
/* Tanggal/Versi : 24 Des 2016/Ver1.0    */
/* Compiler      : Dev-C++ 5.11          */

#include <stdio.h>
#include <math.h>
main(){
	int x,n;
	scanf("%d",&n);
	
	n=n+floor(n*6/20);
	x=n*6+n;
	printf("%d",x);
	return 0;		
}
