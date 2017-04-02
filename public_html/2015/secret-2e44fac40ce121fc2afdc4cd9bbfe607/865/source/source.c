/*
Program 	 	: FPB_Fathin.c
Deskripsi 	 	: Menghitung nilai fpb dari dua bilangan.
Compiler        : Dev-C++ 5.11
Tanggal/Version : 30112015/ v1.0
*/
#include <stdio.h>
int main(){
	int a,b,c,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
			scanf("%d %d",&a,&b);
			c=fpb(a,b);
			printf("%d/%d\n",b/c,a/c);	
	}
return 0;
}
int fpb(int a, int b){
	if (b==0){
			return a;
	}else{
		fpb(b,a % b);
	}
}
