#include <stdio.h>
#include <string.h>
main()
{
int i=0;
int hitung;
char kata[9];

scanf("%s", &kata);
hitung=strlen(kata);
for(hitung-1;hitung>0;hitung--){
		printf("%c", kata[hitung-1]);
	}
	printf("\n");
}
