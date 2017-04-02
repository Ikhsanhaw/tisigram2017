#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i, N;
    
    scanf("%d", &N);
    char nilai[N][1001];
    
    for(i=0 ; i<N ; i++){
            scanf("%s", &nilai[i]);
    }
    for(i=0 ; i<N ; i++){
            if(atof(nilai[i]) <= (pow(2,64))-1){
                             printf("true\n");
            } else {
                   printf("false\n");
            }
    }
    return 0;
}
    
    
