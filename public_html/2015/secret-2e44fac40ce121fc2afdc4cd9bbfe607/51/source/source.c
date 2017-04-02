#include <stdio.h>

int main(){
	float inputSuhu = 0;

	scanf("%f", &inputSuhu);
	printf("%.2f\n", inputSuhu*1.8+32);
	
	return 0;
}
