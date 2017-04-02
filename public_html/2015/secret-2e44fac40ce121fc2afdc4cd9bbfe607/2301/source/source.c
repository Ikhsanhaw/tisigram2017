#include<stdio.h>
int hitung_hari(int A, int B, int H);
int main(){
    int A,B,H;
    int jum;
    // A naik di siang hari
    // B turun dimalam hari
    // H kedalaman sumur
    scanf("%d %d %d",&A,&B,&H);
    if(0<=A && A<=500 && 0<=B && B<= 500 && 0<=B && B<=10000){
    jum = hitung_hari(A,B,H);
    if(jum <= 0){
      printf("mustahil");
    }else{
      printf("%d",jum);
    }
    }
    return 0;
}
    
int hitung_hari(int A, int B, int H){
      int i=1; // berapa hari
      int m = 0;
        for(;;){
          if(i%3 != 0){
              m = m+A;    
              
          }else if(i%5 == 0){
             if(m < H){
               return 0;
             }
          }
          else{
             m = m+(A*3);    
          }
          if(m>=H){
             return i;
          }
          if(i%5 != 0){
          m = m - B;
          }else{
          m = m-(B*5);
          }
          i++;
        }
    }
