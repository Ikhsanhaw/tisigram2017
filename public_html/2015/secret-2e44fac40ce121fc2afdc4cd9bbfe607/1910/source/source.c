#include <stdio.h>
//#include <conio.h>
int main(){
    int a,b,x,y,c,d;
    scanf("%d",&a); 
    scanf("%d",&b); 
    scanf("%d",&x); 
    scanf("%d",&y);
    if(a==b){
        printf("mustahil");
        return 0;
             }
    c= (y-(b*x))/(a-b);
    d=(y-(a*x))/(b-a) ;
    if(c<=0||d<=0){
        printf("mustahil");
                   
                   }else{
    printf("%d %d\n",c,d);
}
//    getch();
    return 0;
}
