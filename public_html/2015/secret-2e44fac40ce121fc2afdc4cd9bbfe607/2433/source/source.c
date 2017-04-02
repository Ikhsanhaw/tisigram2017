#include <stdio.h>
int main(){
    int a,b,x,y,c,d;
    scanf("%d",&a); 
    scanf("%d",&b); 
    scanf("%d",&x); 
    scanf("%d",&y);
    
    if(a==b){
             }else{
    c= (((y-(b*x))*2)/(a-b));
    d= (((y-(a*x))*2)/(b-a));
    if(c<=0||d<=0||c%2!=0||d%2!=0){
        printf("mustahil");
                   
                   }else{
    printf("%d %d\n",(c/2),(d/2));
}
}
   //getch();
    return 0;
}
