/*Program        : EncodeCP3H.c          */
/* Nama          : Muhammad Eldi Pratama */
/* Tanggal/Versi : 24 Des 2016/Ver1.0    */
/* Compiler      : Dev-C++ 5.11          */

#include <stdio.h>
#include <math.h>
int main(){
	int x,a,b,c,max,min=0,i;
	scanf("%d %d %d %d",&x,&a,&b,&c);
	
	for(i=0;i<x;i++){
		if(i%a==0 && i%b==0 && i%c==0)
			max=i;	
	}
	
	i=x+1;
	while(min==0){
		if(i%a==0 && i%b==0 && i%c==0)
			min=i;
		i++;}
	
	printf("%d %d",max,min);
	return 0;}
