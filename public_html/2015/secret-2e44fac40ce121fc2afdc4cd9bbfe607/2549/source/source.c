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
	int x,tot,y,z,i;
	float av;
	scanf("%d",&x);
	while(x--){
		tot=0;
		scanf("%d",&z);
		i=z;
		while(z--){
			scanf("%d",&y);
			tot+=y;
		}
		av=(float)tot/(float)i;
		printf("%.2f\n",av);
	}
	return 0;
}
