#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int bil[N];
	int i, max = 0;
	for (i = 0; i < N; i++){
		scanf("%d", &bil[i]);
		if(bil[i] > max){
			max = bil[i];
		}
	}
	printf("%d\n",max);

	return 0;
}
