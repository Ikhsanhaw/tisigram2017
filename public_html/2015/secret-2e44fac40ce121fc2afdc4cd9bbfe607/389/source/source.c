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
	int t,i,x,j,n,cek;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&x);
		cek=0;
		for(j=0;j<x;j++){
			scanf("%d",&n);
			if(n<=60){
				cek=1;
			}
		}
		if(cek==0){
			printf("lulus\n");
		}else{
			printf("anda harus remedial\n");
		}
	}
	
return 0;
}

