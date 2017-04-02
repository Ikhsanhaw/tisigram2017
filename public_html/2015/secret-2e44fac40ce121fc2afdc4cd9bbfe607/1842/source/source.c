#include<stdio.h>

int main()
{
   int a;
   int b;
   int c;
   int d;
   int f;
   int e;
   int hasil;
   int hasil2;

   
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   
   hasil = ((a*b)+c)/2;
   printf("%d\n", hasil);
   
   scanf("%d", &d);
   scanf("%d", &e);
   scanf("%d", &f);
   hasil2 = (d*e)/2;
   if (hasil2 > f)
   {
		printf("mustahil\n");
	}
	
	getch();
	return 0;
}
