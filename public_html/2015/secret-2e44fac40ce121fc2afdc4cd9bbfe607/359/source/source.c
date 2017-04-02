#include<stdio.h>
#include<math.h>

int main(){
	float C, F;
	
	scanf("%f", &C);
	if (C < 100)
	{
		F=C*1.8+32;
	}
	printf("%.2f\n", F);
	return 0;
}
