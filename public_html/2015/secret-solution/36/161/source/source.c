#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char mahasiswa[31];

int main(){
	int n;
	scanf("%d\n",&n);
	mahasiswa mhs[n];
	int i;
	for(i=0;i<n;i++){
		gets(mhs[i]);
	}
	int a;
	char temp[30],max[30];
	int index;
	for(i=n-1;i>=0;i--){
		strcpy(max,mhs[i]);
		index = i;
		for(a=i;a>=0;a--){
			if((strcmp(max,mhs[a]) == -1)){
				strcpy(max,mhs[a]);
				index = a;
			}
		}
		strcpy(temp,mhs[i]);
		strcpy(mhs[i],mhs[index]);
		strcpy(mhs[index],temp);
		if(index != i){
			printf("%d %d\n",index+1,i+1);
		}
	}
	return 0;
}
