#include <stdio.h>
#include<stdlib.h>

int main()
{
	int angka;
	int h=0;
	int a[h];

	
	scanf("%d", &angka);
	for(h=1;h<=angka;h++)
	{	
	scanf("%d", &a[h]);
    }
    
    for(h=1;h<=angka;h++)
    {
        printf("%c",a[h]);
    }
    
	return 0;
}
