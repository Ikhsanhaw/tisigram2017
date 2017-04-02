#include <stdio.h>
int main(){
	int n;
	int max = 0;
	int i = 0;
	int tmp;
	scanf("%d",&n);
	while(i < n){
		scanf("%d",&tmp);
		if (tmp > max){
			max = tmp;
		}
		i++;
	}
	printf("%d\n", max);
	return 0;
}