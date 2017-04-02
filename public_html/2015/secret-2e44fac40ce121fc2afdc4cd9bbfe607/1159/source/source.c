#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	
	char x[n][50];
	
	int i;
	for(i=0;i<n;i++){
		scanf("%s",&x[i]);
	}
	
	char y[50];
	int j;
	int k;
	for(i=0;i<n;i++){
		k=0;
		for(j=0;j<strlen(x[i]);j++){
			if(x[i][j]%2==0){
				y[k]=x[i][j];
				k++;
			}
		}
		y[k]='\0';
		printf("%s\n",y);
	}
	return 0;
}