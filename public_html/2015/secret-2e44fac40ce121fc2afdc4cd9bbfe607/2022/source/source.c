#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int bil[N];
    int i;
    int max;
    int hasil;
    
    for (i = 0; i < N; i++) 
    {
        max = bil[i];
        hasil = max + (bil[i+1]);    
    }
    
    printf("%d" , hasil );
    

 return 0;   
}
