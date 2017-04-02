#include<stdio.h>

#include<math.h>

int main(){
long int fm,n,m;

scanf("%d",&n);
m=pow(n,n);

fm=m % 2;
printf("%d\n",fm);
return 0;
}
