#include<stdio.h>
#include<math.h>

int main(){
	int N,M;
	int students, susan;
	scanf("%d %d", &N, &M);
	students = N/M;
	if (N % M != 0){
		susan = N % M;
	}
	printf("%d %d\n", students, susan);
	return 0;
}
