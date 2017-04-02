#include <stdio.h>
int main()
{
    unsigned long long number;
    int T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%llu",&number);
        if(number == 0)
        {
            printf("false\n");
        }
        else
            printf("true\n");
    }
    return 0;
}
