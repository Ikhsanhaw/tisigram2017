#include<stdio.h>

int main(){
    /*Deklarasi*/
    int A,B,H;
    int jarak=0;
    int mustahil=1,find=0;
    int hari=0;
    
    /* Proses */
    scanf("%d %d %d", &A,&B,&H);
    while((jarak<H) && (mustahil==1) && (find==0)){
      hari++;
      if((hari%3==0) && (hari!=0)){
         jarak = jarak + (A*3);
         if(jarak > H){
            mustahil=0;
         }
         jarak = jarak - B;
         //printf("MASUK\n");
      }else{
         if((hari%5==0) && (hari!=0)){
            jarak = jarak + A;
            if(jarak > H){
               mustahil=0;
            }
            jarak = jarak - (B*2);
         }else{
            jarak = jarak + A;
            if(jarak > H){
               mustahil=0;
            }
            jarak = jarak - B;
             
         }
      }
      //printf("%d %d\n", hari,jarak);
      
      
      if(hari > 18750){
         find=1;
      }
    }
    
    if(mustahil==0){
       printf("%d\n", hari);
    }else{
       printf("mustahil\n");
    }
    
    //system("pause");
    
    //si cakcak ngajieun lieur
    return 0;
}
