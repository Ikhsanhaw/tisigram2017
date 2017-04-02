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
char k[101];
int main(){
	int n,i,x,y,count;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		count=0;
		scanf("%s",&k);
		for(x=0;x<strlen(k);x++){
			for(y=x;y<strlen(k);y++){
				if(pal(x,y)==0){				
					count++;		
				}
			}
		}
		printf("%d\n",count+strlen(k));	
	}
return 0;
}

int pal(int min,int max){
	int i,cek;
	cek=0;
	i=min;
	while((i<(max+i)/2+1) && (cek==0)){					//cek elemen ke i dari awal dan elemen ke i dari akhir, jika semua sama, maka palindrom
			if(k[i]!=k[max+min-i-1]){
				cek=1;
			}
		i++;
	}
	return cek;
}
