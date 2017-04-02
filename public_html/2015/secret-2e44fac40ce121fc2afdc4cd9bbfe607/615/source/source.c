#include<stdio.h>

int main (){
	int i, bil1, bil2;
	
	scanf("%d %d", &bil1, &bil2);
	
	bil1 = bil1 + 64;
	bil2 = bil2 + 64;
	for(i=bil2; i>bil1;i--)
	{
		if(i<bil1)
		{
			printf("%c\n", i);
		} else {
			printf("%c ", i);
		}
	}
	
	return 0;
}
