#include<stdio.h>
int main()
{
int i;
scanf("%d",&i);
int x[i];
int j;
for(j=0;j<i;j++)
{
                scanf("%d",&x[j]);                 
}
for(j=0;j<i;j++)
{
                printf("%c",x[j]);                 
}
                printf("\n");
                return 0;
}
