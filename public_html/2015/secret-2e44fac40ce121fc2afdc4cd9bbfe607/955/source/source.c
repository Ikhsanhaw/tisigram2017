#include<stdio.h>

int main()
{
	int i;
	char Z[3];
	int nilai=0;
	
	for(i=0;i<3;i++)
	{
		scanf("%s",&Z[i]);
	
		if(Z[i]=='S' || Z[i]=='s')
		{
			nilai+=6;
		}
		if(Z[i]=='A' || Z[i]=='a')
		{
			nilai+=5;
		}
		if(Z[i]=='B' || Z[i]=='b')
		{
			nilai+=4;
		}
		if(Z[i]=='C' || Z[i]=='c')
		{
			nilai+=3;
		}
		if(Z[i]=='D' || Z[i]=='d')
		{
			nilai+=2;
		}
		if(Z[i]=='E' || Z[i]=='e')
		{
			nilai+=1;
		}
	}
	nilai=nilai-2;
	
	switch(nilai)
	{
		case 1: printf("E\n");break;
		case 2: printf("E+\n");break;
		case 3: printf("D-\n");break;
		case 4: printf("D\n");break;
		case 5: printf("D+\n");break;
		case 6: printf("C-\n");break;
		case 7: printf("C\n");break;
		case 8: printf("C+\n");break;
		case 9: printf("B-\n");break;
		case 10: printf("B\n");break;
		case 11: printf("B+\n");break;
		case 12: printf("A-\n");break;
		case 13: printf("A\n");break;
		case 14: printf("A+\n");break;
		case 15: printf("S-\n");break;
		case 16: printf("S\n");break;
	}
	return 0;
}
