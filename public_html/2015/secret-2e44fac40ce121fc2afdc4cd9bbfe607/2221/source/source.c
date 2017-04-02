#include <stdio.h>
#include <math.h>

int main (){
    int T, i;
    unsigned int X[100];
    
    scanf("%d", &T);
    
    for(i=0 ; i<T ; i++){
        scanf("%u", &X[i]);
    }
    for(i=0 ; i<T ; i++){
        if((X[i]>=0) && (X[i]<65535)){
           printf("true\n");
        } else {
           printf("false\n");
        }
    }
    return 0;   
}
