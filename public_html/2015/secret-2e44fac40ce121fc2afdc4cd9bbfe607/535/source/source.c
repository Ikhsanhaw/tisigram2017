# include <stdio.h>

int main(){
	int total,i;
	typedef struct Word{
	char word[15];
	}words;
	scanf("%d", &total);
	words X[total];
	
	for(i=0;i<total;i++){
		scanf("%s", &X[i]);	
	}
	for(i=0;i<total;i++){
		printf("%s\n", X[i]);
	}	
	return 0;
}
