#include<stdio.h>

int main()
{
    int A, B, H;
scanf("%d", &A);
scanf("%d", &B);
scanf("%d", &H);
int temp1 = 0;
int temp4 = 0;
int temp3 = 1;
int temp0 = 0;
int i = 0;

if(A>B){
        while(temp1<H){
                   temp0 = A-B;
                   temp3 = temp3 + temp0;
                   temp4 = temp3 + A;
                   temp1 = temp4 - B;
                   
           i++;
           }
           printf("%d",i);
        }
        else{
             printf("mustahil");
             }
             printf("\n");
    return 0;
        
}
