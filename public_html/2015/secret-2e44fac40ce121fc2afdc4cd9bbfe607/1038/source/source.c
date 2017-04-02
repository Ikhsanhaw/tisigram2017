/* Program 	: -
Deskripsi 	: -
Nama 		: FREENANDO R/polban
Tanggal 	: -
Compiler 	: dev-c++ 5.7.1
============================================================ */
#include <stdio.h>

int faktor(int a,int b,int c);

int main(){
	int d,e,f,g,h,x,y,z,kpk;
	scanf("%d%c%d%c%d",&x,&g,&y,&h,&z);
	scanf("%d %d %d",&d,&e,&f);
	kpk=faktor(d,e,f)+x;
	if(y==2 && z%4){
		if(kpk>29){
			kpk=29-kpk;
		}
	}else if(kpk>30){
		kpk=30-kpk;
	}
	printf("%d%c%d%c%d\n",kpk,g,y,h,z);
	return 0;
}

int faktor(int a,int b,int c){
	int i=a,exit=0;
	while(i<=a*b*c && exit==0){
		if((i%a==0)&&(i%b==0)&&(i%c==0)){
			exit=1;
		}
		i++;
	}
	return i-1;
}
