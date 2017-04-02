#include<stdio.h>

int main(){
    /*Deklarasi*/
    int X[10],T;
    int A,B,C,D,E,F;
    int i,j;
    
    /*Proses*/
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d %d %d %d %d %d", &A,&B,&C,&D,&E,&F);
        X[i]=A+B+C+D+E+F;
    }
    
    for(i=0; i<T; i++){
        printf("%d\n", X[i]);
    }
    
    //system("pause");
    return 0;
}
