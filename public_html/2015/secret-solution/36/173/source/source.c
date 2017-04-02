#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char mahasiswa[31];

int main(){
	int n;
	scanf("%d\n",&n);
	mahasiswa mhs[n],temp,max;
	int i;
	for(i=0;i<n;i++){
		gets(mhs[i]);
	}
	int a;
	int index;
	for(i=n-1;i>=0;i--){
		strcpy(max,mhs[i]);
		index = i;
		for(a=i;a>=0;a--){
			if((strcmp(max,mhs[a]) < 0)){
				strcpy(max,mhs[a]);
				index = a;
			}
		}
		if(index != i){
			strcpy(temp,mhs[i]);
			strcpy(mhs[i],mhs[index]);
			strcpy(mhs[index],temp);
			printf("%d %d\n",index+1,i+1);
		}
	}
	return 0;
}
