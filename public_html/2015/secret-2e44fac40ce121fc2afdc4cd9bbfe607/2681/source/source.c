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
	char input[11];

	gets(input);
	
	int i;
	for (i = strlen(input) - 1; i >= 0; i--)
	{
		printf("%c", input[i]);
	}
	printf("\n");

	return 0;
}
