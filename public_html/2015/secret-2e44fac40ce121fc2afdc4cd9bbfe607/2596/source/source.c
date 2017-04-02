/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
#include <math.h>

unsigned long long int f(int a){
	return a<2 ? 1: a*f(a-1);
}

unsigned long long int c(int a,int b){
	return f(a)/(f(b)*f(a-b));
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%llu\n",c(a,b));
	return 0;
}


