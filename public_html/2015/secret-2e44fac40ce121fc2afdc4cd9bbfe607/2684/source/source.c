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
	int N;
	scanf("%d", &N);

	int i;
	int result = 0;
	int summator = 2;

	for (i = 1; i <= N; i++)
	{
		result += summator;
		summator += 4;
	}

	printf("%d\n", result);

	return 0;
}
