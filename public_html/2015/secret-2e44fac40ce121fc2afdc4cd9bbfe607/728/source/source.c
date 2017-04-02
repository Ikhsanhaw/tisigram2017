#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char tmp[16];
	int i = 0;
	while(i <= n){
		fgets(tmp, 16, stdin);
		printf("%s\n", tmp);
		i++;
	}
	return 0;
}