#include<stdio.h>
#include<conio.h>
int main()
{
 int A;
 int B;
 int H;
 int i;
 scanf("%d %d %d",&A,&B,&H);
 
 if(A>B)
 {
 i = (H-A)+B-1;
 printf("%d",i);
 }
 else
 {
 printf("mustahil");
 }
 getch();
}
