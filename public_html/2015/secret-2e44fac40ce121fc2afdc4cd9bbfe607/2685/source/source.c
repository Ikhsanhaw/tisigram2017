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
	int X, Y;
	scanf("%d %d", &X, &Y);

	int i;
	for (i = 1; i <= X; i++)
	{
		if (Y % 2 == i % 2)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}
