#include<stdio.h>

int main(){
    /*Deklarasi*/
    int A,B,H;
    int jarak=0;
    int mustahil=0;
    int hari=0;
    
    /* Proses */
    scanf("%d %d %d", &A,&B,&H);
    while((jarak<H) && (mustahil==0)){
      if((hari%3==0) && (hari!=0)){
         jarak = jarak + (A*3);
         jarak = jarak - B;
         //printf("MASUK\n");
      }else{
         if((hari%5==0) && (hari!=0)){
            jarak = jarak + A;
            jarak = jarak - (B*2);
         }else{
            jarak = jarak + A;
            jarak = jarak - B;
             
         }
      }
      //printf("%d %d\n", hari,jarak);
      hari++;
      
      if(jarak<0){
        mustahil=1;      
      }    
    }
    
    if(mustahil==0){
       printf("%d\n", hari-1);
    }else{
       printf("mustahil\n");
    }
    
    //system("pause");
    return 0;
}
