#include<stdio.h>

int main()
{
	char x;
	scanf("%c", &x);
	if((x=='a')||(x=='A'))
	{	printf("True");	}
	else if((x=='i')||(x=='I'))
		{	printf("True");	}
		else if((x=='u')||(x=='U'))
		{	printf("True");	}
			else if((x=='e')||(x=='E'))
			{	printf("True");	}
				else if((x=='o')||(x=='O'))
				{	printf("True");	}
				else {	printf("False");	}
	return 0;
}
