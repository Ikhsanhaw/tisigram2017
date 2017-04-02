#include <stdio.h>
#include <math.h>

int main(){
	int n,m;
	int murid,susan;
	scanf("%d",&n);
	scanf("%d", &m);
	
	murid = n/m;
	susan = fmod(n,m);
	
	printf("%d %d",murid,susan);
	return 0;
}
