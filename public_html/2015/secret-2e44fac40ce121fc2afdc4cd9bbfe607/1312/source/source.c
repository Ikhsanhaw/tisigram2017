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
	int x,a,b,c,sum;
	scanf("%d",&x);
	if(x<tukar(x)){
		sum=tukar(x);
	}else{
		sum=x;
	}
	printf("%d\n",sum);
return 0;
}
int tukar(int x){
	int a,b,c,sum;
	a=x/2;
	b=x/3;
	c=x/4;
	sum=a+b+c;
	return sum;
}

