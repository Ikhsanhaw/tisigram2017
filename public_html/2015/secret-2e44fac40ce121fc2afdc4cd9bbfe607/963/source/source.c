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
	int n,i,j,k,p,x[100][1000],total[101],maks=-1,win=0,z;
	scanf("%d",&n);
	for(z=0;z<n;z++){
		maks=-1;
		scanf("%d",&k);
		scanf("%d",&p);
		for(i=0;i<p;i++){
			for(j=0;j<k;j++){
				scanf("%d",&x[i][j]);
			}
		}
		for(j=0;j<k;j++){
			for(i=0;i<p;i++){
				total[j]=total[j]+x[i][j];
			}
			if(maks<=total[j]){
				maks=total[j];
				win=j;
			}
		}
		printf("%d\n",win+1);
		for(j=0;j<k;j++){
			total[j]=0;
		}
	}
	
return 0;
}

