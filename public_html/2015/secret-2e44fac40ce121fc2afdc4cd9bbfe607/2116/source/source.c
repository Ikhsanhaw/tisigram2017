#include<stdio.h>

int main()
{
   int a;
   int b;
  int c;
   int hasil;
  int pencobaan;
   int hasil2;

   
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
  
   hasil = (a*b) + c;
   hasil2 = hasil/2;
    pencobaan = c-b ;
    
   if(hasil2 != pencobaan)
   {
    printf("mustahil\n"); 
    }  
    else {
       printf("%d", hasil2);
       }
	

	return 0;
}
