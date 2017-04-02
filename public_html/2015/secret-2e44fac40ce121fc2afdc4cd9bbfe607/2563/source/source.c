/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
#include<string.h>
int main(){
	int t,cek;
	char s[1001];
	scanf("%d",&t);
	while(t--){
		scanf("%s",&s);
		cek=0;
		if(strlen(s)>20){
			printf("false\n");
		}else if(strlen(s)<20){
			printf("true\n");
		}else{
			if(s[0]>'1') cek=1;
			if(s[1]>'8') cek=1;
			if(s[2]>'4') cek=1;
			if(s[3]>'4') cek=1;
			if(s[4]>'6') cek=1;
			if(s[5]>'7') cek=1;
			if(s[6]>'4') cek=1;
			if(s[7]>'4') cek=1;
			if(s[8]>'0') cek=1;
			if(s[9]>'7') cek=1;
			if(s[10]>'3') cek=1;
			if(s[11]>'7') cek=1;
			if(s[12]>'0') cek=1;
			if(s[13]>'9') cek=1;
			if(s[14]>'5') cek=1;
			if(s[15]>'5') cek=1;
			if(s[16]>'1') cek=1;
			if(s[17]>'6') cek=1;
			if(s[18]>'1') cek=1;
			if(s[19]>'5') cek=1;
			if(cek==1) printf("false\n");
			else printf("true\n");
		}
		
	}
	return 0;
}

