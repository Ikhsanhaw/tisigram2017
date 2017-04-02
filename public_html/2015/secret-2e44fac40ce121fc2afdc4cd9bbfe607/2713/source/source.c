/* Last boss - MS
 * edisi sudah berbulan-bulan tidak nge-CP
 *
 * for the apple of my eyes
 * memang bukan ACM-ICPC, bukan kompetisi bergengsi lainnya
 * tapi source code malam ini untukmu :)
 */

#include <stdio.h>
#include <string.h>

int main()
{
	int N, Y, Z;
	scanf("%d %d %d", &N, &Y, &Z);

	printf("%d\n", N);

	if (N == 0 && Y != 0)
	{
		puts("mustahil!");
	}
	else
	{
		printf("%d\n", N + Y);
	}

	if (N - Z < 0)
	{
		puts("mustahil!");
	}
	else
	{
		printf("%d\n", N - Z);
	}

	return 0;
}
