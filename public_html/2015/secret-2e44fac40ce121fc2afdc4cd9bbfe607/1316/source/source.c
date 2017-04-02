#include<stdio.h>
#include<math.h>

int main(){
	int N,M;
	int students, susan;
	scanf("%d %d", &N, &M);
	if (M == 0){
		susan = N;
	}
	else{
		if (N<M){
			students = M/N;
			susan = 0;
		}
		else{
			students = N/M;
			susan = N%M;
	}
	}
	printf("%d %d\n", students, susan);
	return 0;
}
