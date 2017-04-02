#include <stdio.h>
int main(){
    int a,b,x,y,c,d;
    scanf("%d",&a); 
    scanf("%d",&b); 
    scanf("%d",&x); 
    scanf("%d",&y);
    if(c<=0||d<=0||a==b){
        printf("mustahil");
                   
                   }else{
    c= (y-(b*x))/(a-b);
    d=(y-(a*x))/(b-a) ;
    printf("%d %d\n",c,d);
}
    
    return 0;
}
