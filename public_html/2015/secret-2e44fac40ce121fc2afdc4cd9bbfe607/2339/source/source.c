#include <stdio.h>
#include <conio.h>

int main(){
    int i,hari=0;
    unsigned int x[3];
    for(i=0;i<3;i++){
    scanf("%d",&x[i]);
    }
    
    if(x[0]<x[1]){
    printf("mustahil\n");
                  }
    else
    {
    i=0;
    while(i<x[2])
        {
       hari++;
           if ((hari%3)==0){
                x[0]=x[0]*3;
                }
           if ((hari%5)==0){
                x[1]=x[1]*2; 
                i=i-x[1];
                }         
         i=i+x[0];
         }
        
         printf("%d\n",hari); 
    }       
         
    getch();
    return 0;
}
