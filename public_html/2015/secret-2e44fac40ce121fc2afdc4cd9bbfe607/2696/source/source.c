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
	int X, H;
	scanf("%d %d", &X, &H);

	if (X == 0)
	{
		puts("mustahil");
	}
	else
	{
		printf("%d\n", H / X + (H % X != 0));
	}

	return 0;
}
