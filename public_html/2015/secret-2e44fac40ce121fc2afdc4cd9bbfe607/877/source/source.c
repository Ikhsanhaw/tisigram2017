/* Program 	: -
Deskripsi 	: -
Nama 		: freenando r/151524011
Tanggal 	: -
Compiler 	: dev-c++ 5.7.1
============================================================ */
#include<stdio.h>
#include<string.h>
int main(){
	int limit,i,j;
	scanf("%d",&limit);
	char data[limit][51];
	for(i=0;i<limit;i++){
		scanf("%s",&data[i]);
	}
	for(i=0;i<limit;i++){
		for(j=0;j<strlen(data[i]);j++){
			if(data[i][j]%2==0){
				printf("%c",data[i][j]);
			}
		}
		printf("\n");
	}
//	printf("\n");
return 0;
}
