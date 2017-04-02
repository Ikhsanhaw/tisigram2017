#include <stdio.h>
#include <string.h>

int main()
{
int i;
char N[10];
scanf("%s", &N);

for(i=strlen(N)-1;i>=0;i--)
printf("%c", N[i]);
printf("\n");

return 0;
}
