#include <stdio.h>
#include <string.h>

int main(){
	
	int T,i,j,n;
	char M[10];
	
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%s",&M);
		n = 0;
		for(j=strlen(M)-1;j>=0;j--){
			if(M[j]=='0'){
				n++;
			}else{
				break;
			}
		}
		printf("%d\n",n);
	}
	return 0;
}
