#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	n++;
	char tmp[n][15];
	int i = 0;
	while(i < n){
		fgets(tmp[i], 15, stdin);
		i++;
	}
	i = 1;
	while(i < n){
		printf("%s\n", tmp[i]);
		i++;
	}
	return 0;
}