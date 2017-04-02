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
	int a,b,c;
	if(x<12){
		return x;
	}else{
		a=x/2;
	b=x/3;
	c=x/4;
	if(a<tukar(a)){
		a=tukar(a);
	}
	if(b<tukar(b)){
		b=tukar(b);
	}
	if(c<tukar(c)){
		c=tukar(c);
	}	
	return a+b+c;
	}
	
}

