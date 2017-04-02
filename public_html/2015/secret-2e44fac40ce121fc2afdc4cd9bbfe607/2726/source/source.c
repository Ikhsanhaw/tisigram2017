#include <stdio.h>

int main(){
int x,y;
printf("masukkan jumlah lantai\n");
scanf("%d",&x);
printf("masukkan angka genap atau ganjil\n");
scanf("%d",&y);
if (x>0&&y<100) {
	if(y % 2 == 0){
	y=2;
	while (y<=x)
	{
		printf("%d\n",y);
		y=y+2;
	}
	}
	else {
	y=1;
	while (y<=x)
	{
		printf("%d\n",y);
		y=y+2;
	}	
	}
}
else {
	printf("error\n");
}
return 0;
}
