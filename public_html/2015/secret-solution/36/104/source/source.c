#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct mahasiswa{
	char nama[30];
}mahasiswa;

int main(){
	int n;
	scanf("%d\n",&n);
	mahasiswa mhs[n];
	int i;
	for(i=0;i<n;i++){
		gets(mhs[i].nama);
	}
	int a;
	char temp[30],max[30];
	int index;
	for(i=n-1;i>=0;i--){
		strcpy(max,mhs[i].nama);
		index = i;
		for(a=i;a>=0;a--){
			if((strcmp(max,mhs[a].nama) == -1)){
				strcpy(max,mhs[a].nama);
				index = a;
			}
		}
		strcpy(temp,mhs[i].nama);
		strcpy(mhs[i].nama,mhs[index].nama);
		strcpy(mhs[index].nama,temp);
		if(index != i){
			printf("%d %d\n",index+1,i+1);
		}
	}
	return 0;
}
