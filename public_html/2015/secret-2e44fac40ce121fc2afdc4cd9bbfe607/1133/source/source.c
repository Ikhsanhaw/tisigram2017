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
	int n,a[10][102],j,i,k,p,m,total[10],maks,win;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		scanf("%d",&p);
		for(j=0;j<k;j++){
			for(m=0;m<p;m++){
				scanf("%d",&a[j][m]);
					printf("----> %d\n",a[m][j]);
			}
		}
		maks=-1;
	for(j=0;j<k;j++){
		total[j]=0;
			for(m=0;m<p;m++){
				total[j]=a[j][m]+total[j];
			}
			if(total[j]>maks){
				maks=total[j];
				win=j;
				printf("%d\n",total[j]);
			}
	}
	printf("%d\n",win+1);
	}
	
	
return 0;
}

