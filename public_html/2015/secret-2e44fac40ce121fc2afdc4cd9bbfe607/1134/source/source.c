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
	int n,j,i;
	char s[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&s);
		for(j=0;j<strlen(s);j++){
			if(s[j]%2==0){
				printf("%c",s[j]);
			}
		}
		printf("\n");
	}
return 0;
}

