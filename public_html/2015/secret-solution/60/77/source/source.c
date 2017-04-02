/*
- SWAP STRING -
Author 	: Arief Subagja
Date	: 28 March 2016
*/

#include<stdio.h>
#include<string.h>


int main()
{
	char input[30],swap1,swap2;
	int i;
	
	gets(input);
	scanf("%c",&swap1); scanf("%c",&swap2);

	i=0;
	while(input[i]!='\0')
	{
		if(input[i] == swap1)
		{
			input[i] = swap2;
		}
		
	i++;
	}
	printf("%s\n",input);
	return 0;
}
