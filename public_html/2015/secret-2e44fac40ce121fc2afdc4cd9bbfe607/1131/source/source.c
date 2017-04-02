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
	int a[5],i,b[5],total=0;
	for(i=1;i<4;i++){
		scanf("%s",&a[i]);
		switch(a[i]){
			case 'S' : b[i]=16; break; 
			case 'A' : b[i]=13; break; 
			case 'B' : b[i]=10; break; 
			case 'C' : b[i]=7; break; 
			case 'D' : b[i]=4; break; 
			case 'E' : b[i]=1; break; 
		}
		total=total+b[i];
	}
	total=total/3;
	if(total==16){
		printf("S\n");
	}else if(total==15){
		printf("S-\n");
	}else if(total==14){
		printf("A+\n");
	}else
	if(total==13){
		printf("A\n");
	}else
	if(total==12){
		printf("A-\n");
	}else
	if(total==11){
		printf("B+\n");
	}else
	if(total==10){
		printf("B\n");
	}else
	if(total==9){
		printf("B-\n");
	}else
	if(total==8){
		printf("C+\n");
	}else
	if(total==7){
		printf("C\n");
	}else
	if(total==6){
		printf("C-\n");
	}else
	if(total==5){
		printf("D+\n");
	}else
	if(total==4){
		printf("D\n");
	}else
	if(total==3){
		printf("D-\n");
	}else
	if(total==2){
		printf("E+\n");
	}else
	if(total==1){
		printf("E\n");
	}	
return 0;
}

