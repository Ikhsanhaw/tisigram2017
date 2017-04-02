#include <stdio.h>
#include <limits.h>
int main()
{
    unsigned long long int max;
    int T;
    scanf("%d", &T);
    while(T--)
    {

        if (scanf("%llu", &max) == 1) {
        {
            printf("true\n");
        }
        } else {
            printf("false\n");
        }
    }
    return 0;
}
