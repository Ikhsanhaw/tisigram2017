#include<stdio.h>
#include<stdlib.h>
#include<math.h>
const long long o = 18446744073709551615;

int main()
{
    int i, X;
    
    scanf("%d", &X);
    char nilai[X][1001];
    
    for(i=0 ; i<X ; i++){
            scanf("%s", &nilai[i]);
    }
    for(i=0 ; i<X ; i++){
            if(atoll(nilai[i]) <= o){
                               printf("true\n");
            } else {
                   printf("false\n");
            }
    }
    getch();
    return 0;
}
    
    
