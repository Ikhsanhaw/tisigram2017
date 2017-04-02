#include <stdio.h>

int main()
{
    int n;
    int m[n];
    int i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
                     scanf("%d", &m[i]);
                     }
    for(i=0;i<n;i++)
    {
                    printf("%c", m[i]);
                    }
    printf("\n");
    return 0;
}
