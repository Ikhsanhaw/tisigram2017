#include<stdio.h>

int main(){
    int a,b,c,x,i,j,d=1,e=1,f=1,flag=0;
    
    scanf("%d %d %d %d",&x,&a,&b,&c);
    i=2;
    // bawah x
    while(!flag){
       if((i%a)==0 && (i%b)==0 && (i%c)==0){
            flag=1;            
       }else{
            i++;
       }             
    }
    j=2;
    flag=0;
    // atas x
    while(!flag){
       if((j%a)==0 && (j%b)==0 && (j%c)==0 && j>x){
            flag=1;            
       }else{
            j++;
       }             
    }
    
    printf("%d %d\n",i,j);
    
    return 0;
}
