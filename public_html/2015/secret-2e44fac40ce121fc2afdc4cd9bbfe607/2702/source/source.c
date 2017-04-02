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
	char X[31];
	char swapper[3];

	gets(X);
	gets(swapper);

	int i;
	for (i = 0; i < strlen(X); i++)
	{
		if (X[i] == swapper[0])
		{
			X[i] = swapper[1];
		}
		else if (X[i] == swapper[1])
		{
			X[i] = swapper[0];
		}
	}

	printf("%s\n", X);

	return 0;
}
