/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
#include <string.h>
int main(){
	int i,t,count,j;
 	char m[100];
 	scanf("%d",&t);
 	for(i=0;i<t;i++){
 		scanf("%s",&m);
 		count=0;
 		for(j=strlen(m)-1;j>=0;j--){
 			if(m[j]=='0'){
 				count++;
			 }else{
			 	break;
			 }
		 }
 		printf("%d\n",count);
	 }
return 0;
}

