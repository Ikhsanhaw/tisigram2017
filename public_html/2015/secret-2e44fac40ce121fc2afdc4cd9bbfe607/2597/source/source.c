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
#include <math.h>
int isMitos(int x){
	while(x>0){
		if(x%10==4 || x%100==13){
			return 1;
		}	
		x/=10;
	}
	return 0;
}

int main(){
	int t,g,h,l;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&g,&h,&l);
		if(isMitos(l)){
			printf("angka mitos\n");
		}else{
			int i,total=g;
			for (i=2;i<=l;i++){
				if(!isMitos(i)) {
					total+=h;
				}
			}
			printf("%d\n",total);
		}
	}
	
	return 0;
}


