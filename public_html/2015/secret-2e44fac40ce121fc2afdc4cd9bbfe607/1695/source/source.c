#include<stdio.h>

int main(){
    /*deklarasi*/
    int A,B,X,Y;
    int count1,count2;
    int i;
    int find=0;
    
    /*Proses*/
    scanf("%d %d", &A, &B);
    scanf("%d %d", &X, &Y);
    
    while((i<=X) && (find==0)){
       if((A*i) + (B*(X-i)) == Y){
          find=1;
          count1=i;
          count2=(X-i);
       }
       i++;
    }
    
    if((count1<=0) || ((count2<=0)) || (find==0)){
       printf("mustahil\n");
    }else{
       printf("%d %d\n", count1,count2);
    }
    
    //system("pause");
    return 0;
}
