#include<stdio.h>


int main(){
	int T,sum=0;
	long M;
	scanf("%li", &M);
	while (M%10 == 0 && M != 0){
		if (M % 10 == 0){
			sum++;
		}
		M = M /10;
	}	
	printf("%d\n", sum);
	return 0;	
}
