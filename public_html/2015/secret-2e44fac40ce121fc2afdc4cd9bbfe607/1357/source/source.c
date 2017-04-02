#include<stdio.h>
#include<math.h>

int main(){
	int N;
	int i, found;
	scanf("%d", &N);
	i = 0;
	found = 0;
	while(i <= 20 && found == 0){
		if (pow(2,i) == N){
			found = 1;
		}
		i++;
	}
	
	if (found == 0){
		printf("FALSE\n");
	}
	else{
		printf("TRUE\n");
	}
	return 0;
}
