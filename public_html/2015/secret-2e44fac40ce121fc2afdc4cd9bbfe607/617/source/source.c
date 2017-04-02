#include<stdio.h>

int main (){
	int i, Kata3, Kata4;
	char Kata1, Kata2;
	
	scanf("%c %c", &Kata1, &Kata2);
	for (i=Kata1-1; i>Kata2;i--)
	{
		printf("%c\n",i);
	}
	
	return 0;
}
