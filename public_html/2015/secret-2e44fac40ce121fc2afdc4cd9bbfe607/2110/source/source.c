#include<stdio.h>

int main(){
    int a,b,h,temp,count=0;
    
    scanf("%d %d %d",&a,&b,&h);
    
    if(b>a){
       printf("mustahil\n");
    }else{
       while(h!=0){
           temp = (h - a);
           if(temp!=0){
             if(temp+b!=0){
              count++;
             }
           }
           h--;
        }
        printf("%d\n",count);      
    }
    
    return 0;
}
