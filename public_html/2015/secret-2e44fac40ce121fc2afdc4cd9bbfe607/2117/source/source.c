#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i, X;
    
    scanf("%d", &X);
    char nilai[X][1001];
    
    for(i=0 ; i<X ; i++){
            scanf("%s", &nilai[i]);
    }
    for(i=0 ; i<X ; i++){
            if(atof(nilai[i]) <= 18446744073709551615){
                             printf("true\n");
            } else {
                   printf("false\n");
            }
    }

    return 0;
}
    
    
