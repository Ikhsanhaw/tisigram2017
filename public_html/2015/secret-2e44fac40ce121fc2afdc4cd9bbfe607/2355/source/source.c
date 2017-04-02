#include<stdio.h>

int main()
{
    int a,b,c;
    int hasil,keluaran;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b) {
         hasil =  (a * b);
         keluaran = (hasil + c)/2; 
         printf("%d\n", keluaran);
    }else{
          printf("mustahil\n");      
    }
    getch();
    return 0;
}
