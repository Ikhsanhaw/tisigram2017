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
	int i;
	int count = 0;
	int input;

	scanf("%d", &N);

	for (i = 0; i < N * N; i++)
	{
		scanf("%d", &input);
		count += (input % 2 == 0 && input % 3 == 0);
	}

	printf("%d\n", count);

	return 0;
}
