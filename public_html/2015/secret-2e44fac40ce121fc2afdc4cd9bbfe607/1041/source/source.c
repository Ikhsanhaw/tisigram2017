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
	int n,a,j[100000],i,cek,index=0,k;
	unsigned long x[100000],tot=0;
	scanf("%d",&n);
	scanf("%d",&a);
			x[index]=a;
			j[index]=1;
//			printf("jumlah %d=%d\n",x[index],j[index]);
			index=1;
	for(i=1;i<n;i++){
		scanf("%d",&a);	
		cek=1;
			for(k=0;k<index;k++){
//					printf("%d==%d\n",x[k],a);
				if(x[k]==a){
					cek=0;
					j[k]++;
					if(x[k]<j[k]){
					printf("-1\n");
					return 0;
					}
//					printf("jumlah %d=%d\n",x[k],j[k]);
					break;
				}
			}
			if(cek==1){
				x[index]=a;
				j[index]=1;
//				printf("jumlah %d=%d\n",x[index],j[index]);
				index++;
			}
			
				
	}
	int l;
	for(l=0;l<index;l++){
		tot+= x[l];
	}
	printf("%lu\n",tot);
return 0;
}

