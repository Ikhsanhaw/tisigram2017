/*Program        : EncodeCP3F.c          */
/* Nama          : Muhammad Eldi Pratama */
/* Tanggal/Versi : 24 Des 2016/Ver1.0    */
/* Compiler      : Dev-C++ 5.11          */

#include <stdio.h>
#include <math.h>
int main(){
	unsigned int x,y;
	scanf("%d",&x);
	
	if(x<10)
		y=x;
		else if (x<100)
				y=floor(x/10)+x%10;
				else if (x<1000)
						y=div(x,100)+div(x,10)%10+x%10;
						else if (x<10000)
								y=div(x,1000)+div(x,100)%10+div(x,10)%10+x%10;
	printf("%d\n",y);
	return 0;		
}
