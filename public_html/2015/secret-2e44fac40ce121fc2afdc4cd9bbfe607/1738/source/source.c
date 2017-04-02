#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i, j, T;
    float hasil;
    scanf("%d", &T);
    
    int angka[T][9];
    for(i=0;i<T;i++)
    {
    scanf("%d", &angka[i][0]);
       for(j=1;j<=angka[i][0];j++){
          scanf("%d", &angka[i][j]);              
       }                
    }
    for(i=0;i<T;i++)
    {
    hasil = 0;
       for(j=1;j<=angka[i][0];j++){
          hasil += angka[i][j];
       }
       printf("%.2f\n", hasil/angka[i][0]);                
    }
    return 0;
}
