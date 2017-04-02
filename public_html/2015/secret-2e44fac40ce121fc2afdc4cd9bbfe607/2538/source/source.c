#include <stdio.h>
int main()
{
    unsigned int number;
    int T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%u",&number);
        if(number == 0)
        {
            printf("false\n");
        }
        else
            printf("true\n");
    }
    return 0;
}
