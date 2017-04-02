#include<stdio.h>

int main(){
    int i;
    int j;
    int k;
    int n;
    int hasil;
    scanf("%d %d %d",&i,&j,&k);
    n=0;
    hasil = 0;
    
    if (i>=j){
    while(hasil<k){    
        n++; 
        if ((n)%3==0)
             hasil=hasil + (3*i)-j;
        else if ((n)%5 ==0)
             hasil= hasil + i-(2*j);
        else 
             hasil =hasil + i-j;        
    }printf("%d\n",n-1);
    }
    else 
         printf("mustahil\n");
    
         
    return 0;
}
