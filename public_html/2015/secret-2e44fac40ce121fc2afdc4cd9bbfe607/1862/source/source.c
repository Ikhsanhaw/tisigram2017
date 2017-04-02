#include <stdio.h>

//Soal D
//Nuhun Panitia
//Konsumsi Kurang, mana nasii?????

int main() {
    int n,j,k,temp,i,l;
    float X[10];
    scanf("%d",&n);
    for (j=0;j<n;j++) {
        X[j]=0.00;
        scanf("%d",&i);
        for (l=0;l<i;l++) {
            scanf ("%d",&temp);   
            X[j]=X[j]+temp;
        }
        X[j]=X[j]/i;
        
    }
    
    for (j=0;j<n;j++) {
        printf("%.2f\n",X[j]);
    }
    return 0;
}
