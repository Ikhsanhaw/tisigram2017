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
	int t,i,x[100],j,n[100][1000],cek[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&x[i]);
		for(j=0;j<x[i];j++){
			scanf("%d",&n[i][j]);
		}
	}
	for(i=0;i<t;i++){
		cek[i]=1;
		for(j=0;j<x[i];j++){
			if(n[i][j]<=60){
				cek[i]=0;
				break;
			}
		}
		if(cek[i]==0){
			printf("anda harus remedial\n");
		}else{
			printf("lulus\n");
		}
	}
	
return 0;
}
