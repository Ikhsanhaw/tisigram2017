#include<stdio.h>
#include<string.h>
int main()
{
	int counter,i,j,lenght;
	char karakter[50];
	scanf("%d",&counter);
	for(i=0;i<counter;i++)
	{
		scanf("%s",karakter);
		lenght = strlen(karakter);
		for(j=0;j<lenght;j++)
		{
			if(karakter[j]%2==0)
			{
				printf("%c",karakter[j]);
			}
		}
	}
	printf("\n");
	return 0;
}
