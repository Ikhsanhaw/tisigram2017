#include <stdio.h>
#include <stdbool.h>

void permutasi(int x);
bool lulus(int i, int x);
int zigzag[10];
int n,i,j;
bool sama[10];

int main(){
	scanf("%d", &n);
	permutasi(1);
	return 0;
}
bool lulus(int i, int x){
	if (x < 3) return true;
	
	int left = zigzag[x - 2];
	int mid = zigzag[x - 1];
	int right = i;
	return (mid > right && mid > left) || (mid < right && mid < left);
}

void permutasi(int x){
	int i;
	for (i = 1; i <= n; i++)
	{
		if (sama[i]) continue;
		if (!lulus(i, x)) continue;
		sama[i]= true;
		zigzag[x] = i;
		if (x == n){
				int i;
				for (i = 1; i <= n; i++){
					printf("%d", zigzag[i]);
				}
				printf("\n");
		}else{
			permutasi(x + 1);
		}
		
		sama[i]=false;
			
	}
}
