#include<stdio.h>
#include<math.h>

int main()
{
	int koor[4], hasil;
	scanf("%d\n",&koor[0]);
	scanf("%d\n",&koor[1]);
	scanf("%d\n",&koor[2]);
	scanf("%d\n",&koor[3]);
	hasil = abs(koor[0] - koor[2]) + abs(koor[1] - koor[3]);
	scanf("%d\n",&hasil);
	
	return 0;
}
