#include <stdio.h>
//#include <conio.h>
int main(){
    int i,j,x,y,z,jHari = 0;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int tinggi_didaki=1,tinggi_didaki2=0;
    float q[100], total = 0;
    int success = 1;
    while(tinggi_didaki<z){
    jHari++;
    int c, d;
    if(jHari%3 == 0){
               c=3;
         }else{
               c=1;
             }
    if(jHari%5 == 0){
               d=2;
         }else{
               d=1;
             }
    tinggi_didaki += (x*c) - (y*d);
    if(tinggi_didaki<tinggi_didaki2){
                                     success = 0;
                                     break;
                                     }
    tinggi_didaki2 = tinggi_didaki;
    }
    if(success){
                printf("%d\n",jHari);
                }else{
                      
    printf("mustahil\n");
}
//    getch();    
    return 0;
}
