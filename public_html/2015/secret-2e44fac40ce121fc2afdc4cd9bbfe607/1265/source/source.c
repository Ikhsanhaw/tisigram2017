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
	int i,t,count;
 	long m;
 	scanf("%d",&t);
 	for(i=0;i<t;i++){
 		scanf("%ld",&m);
 	count=0;
 		while(m%10==0){
 			m=m/10;
 			count++;
		 }
 		printf("%d\n",count);
	 }
return 0;
}

