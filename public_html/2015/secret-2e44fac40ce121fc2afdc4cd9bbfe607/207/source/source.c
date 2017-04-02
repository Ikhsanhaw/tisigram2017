#include <stdio.h>
void reverse(const char *str)
{
    if (*str != '\0')
        reverse((str + 1));
    printf("%c", *str);
}

int main()
{
    char input[10] = {0};
    scanf("%s", input);
    reverse(input);
    printf("\n");
    return 0;
}