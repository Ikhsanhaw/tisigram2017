/*
Program 	 	 : Cicak_Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	int a,b,h,cur=0,dd=1,x,cek=1;
	scanf("%d %d %d",&a,&b,&h);
	
		while(cur<h){
			
			if(dd%3==0) cur+=3*a;
			else cur+=a;
			
			if(cur>=h){
				break;	
			}
			
			if(dd%5==0) cur-=2*b;
			else cur-=b;
			if(cur<0) cur=0;
			if(dd==15) x=cur;
			if(dd==30 && x==cur) { cek=0; break;
			}
			dd++;
		}
		if(cek==1) printf("%d\n",dd);
		else printf("mustahil\n");
	
	return 0;
}

