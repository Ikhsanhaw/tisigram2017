#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i, j, hasil, T;
    scanf("%d", &T);
    
    int angka[T][6];
    for(i=0;i<T;i++)
    {
       for(j=0;j<6;j++){
          scanf("%d", &angka[i][j]);              
       }                
    }
    for(i=0;i<T;i++)
    {
    hasil = 0;
       for(j=0;j<6;j++){
          hasil += angka[i][j];              
       }
       printf("%d\n", hasil);                
    }
    return 0;
}
