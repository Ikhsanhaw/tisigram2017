#include <stdio.h>

int main(){
	int n,m;
	int murid,susan;
	scanf("%d",&n);
	scanf("%d", &m);
	murid = n/m;
	susan = n-(n/m)*m;
	printf("%d %d\n",murid,susan);
	return 0;
}
