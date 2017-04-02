#include <stdio.h>

int main (){
    int T, N, M, X[20000], Y[20000], menang[100], jumlah[2], h, i;
    
    scanf("%d", &T);
    scanf("%d", &N);
    scanf("%d", &M);
    
    for(h=1 ; h<=T ; h++){
            jumlah[1]=0;
        for(i=1 ; i<= N ; i++){
           scanf("%d", &X[i]);
           jumlah[1]=jumlah[1]+X[i];
        }
        jumlah[2]=0;
        for(i=1 ; i<= M ; i++){
           scanf("%d", &Y[i]);
           jumlah[2]=jumlah[2]+Y[i];
        }
        menang[h]=jumlah[2]-jumlah[1];
    }
    for(h=1 ; h<=T ; h++){
        if(menang[h]>0){
        printf("%d\n", menang[h]);
        } else {
          printf("Muntu kalah\n");
        }
    }
    
    
    
    return 0;   
}
