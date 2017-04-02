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
	int n,a,x[100000],tot=0,i,cek=1;
	scanf("%d",&n);
	for(i=0;i<100000;i++){
		x[i]=0;
	}
	for(i=0;i<n;i++){
		scanf("%d",&a);
		x[a]++;
	}
	for(i=0;i<100000;i++){
		if(x[i]>i){
			cek=0;
			break;
		}else if(x[i]>0){
			tot+=i;
		}
	}
	if(cek==0){
		printf("-1\n");
	}else{
		printf("%d\n",tot);
	}
	
	
return 0;
}

