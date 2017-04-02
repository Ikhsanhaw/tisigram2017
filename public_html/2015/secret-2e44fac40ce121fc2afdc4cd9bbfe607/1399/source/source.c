#include <stdio.h>
int tukar(int N);
int main(){
	int N;
	scanf("%d",&N);
	printf("%d\n",tukar(N));
	return 0;
}

int tukar(int N){
	if (N < 12)
		return N;
	else {
		int temp = tukar(N/2) + tukar(N/3) + tukar(N/4);
		if ( temp > N)
			return temp;
		else return N;
	}
}