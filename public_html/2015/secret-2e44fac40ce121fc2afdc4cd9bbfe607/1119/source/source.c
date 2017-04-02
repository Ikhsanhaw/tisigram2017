#include <stdio.h>
int main ()
{
	int x,y;
	scanf ("%d",&x);
	scanf ("%d",&y);
	if (x>y && (y=x+x))
	{
		printf ("PERANG\n");
	}
	else if (y<=(x+x))
	{
		printf ("PERANG\n");
	}
	else
	{
		printf ("MUNDUR\n");
	}
	return 0;
}
