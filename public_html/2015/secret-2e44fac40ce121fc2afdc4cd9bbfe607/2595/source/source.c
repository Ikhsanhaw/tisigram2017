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
	int a,b,x,y,i,cek=0;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&x,&y);
	for(i=1;i<x;i++){
		if(a*i+b*(x-i)==y){ 
			cek=1;
			break;
		}
	}
	if(cek==1) printf("%d %d\n",i,x-i);
	else printf("mustahil\n");
	return 0;
}

