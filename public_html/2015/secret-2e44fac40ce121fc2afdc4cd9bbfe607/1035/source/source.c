#include <stdio.h>
#include <string.h>

int main(){
	int T;
	int i,word;
	
	typedef struct _str{
		char a[50];
		char temp[50];
	}str;
	
	scanf("%d",&T);
	
	str S[T];
	for(i=0;i<T;i++){
		scanf("%s",S[i].a);
	}
	
	for(i=0 ; i<T ; i++){
		word = strlen(S[i].a);
		int k=0;
		for(int j=0;j<word;j++){
			if(S[i].a[j] % 2 == 0){
				S[i].temp[k] = S[i].a[j];
				k++;
			}
		}
		S[i].temp[k] = '\0';
	}
	
	for(i=0;i<T;i++){
		printf("%s\n",S[i].temp);
	}
	
	return 0;
}
