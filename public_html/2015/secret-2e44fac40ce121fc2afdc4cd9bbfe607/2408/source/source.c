#include<stdio.h>

int main()
{
int i;
int A[4]={1,2,3,6};
scanf("%d",&i);
if(i==A[0]+A[1]+A[2]&& i%1+i%2+i%3==0)
{
	printf("Angka Sempurna\n");
}
else
{
	printf("Bukan Angka Sempurna\n");
}
return 0;
}