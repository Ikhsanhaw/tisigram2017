/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
int main(){
	int x,tot,y,z;
	scanf("%d",&x);
	while(x--){
		tot=0;
		z=6;
		while(z--){
			scanf("%d",&y);
			tot+=y;
		}
		printf("%d\n",tot);
	}
	return 0;
}

