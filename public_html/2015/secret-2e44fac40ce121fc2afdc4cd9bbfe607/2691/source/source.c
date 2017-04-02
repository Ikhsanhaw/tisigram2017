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
	int P, K, N;
	scanf("%d %d %d", &P, &K, &N);

	printf("%d\n", (P + N) % (K + 1));

	return 0;
}
