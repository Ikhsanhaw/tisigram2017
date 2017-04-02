#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	int j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char s[5000];
		scanf("%s",s);
		for(j=0;j<strlen(s);j++){
			if(s[j]%2==0){
				printf("%c",s[j]);
			}
		}
		printf("\n");
	}
}
