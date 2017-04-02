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
	int i,max,x,n;
	scanf("%d",&n);
	scanf("%d", &x);
	max=x;
	for (i=1;i<n;i++){
		scanf("%d", &x);
		if(max<x){
			max=x;
		}	
	}
	printf("%d\n",max);
return 0;
}

