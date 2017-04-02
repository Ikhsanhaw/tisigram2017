#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", pangkat(n)%2);
    getch();
    return 0;
}

int pangkat(int n)
{
    int i, temp=1;
    for (i=1; i<=n; i++)
    {
        temp=temp*n;
    }
    n=temp;
    return n;
}
