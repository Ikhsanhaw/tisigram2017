#include <stdio.h>
//#include <conio.h>

int main(){
    unsigned int n,i,j;
    scanf("%d)",&n);
    float x[n][2];
     float hasil,k;
    for(i=0;i<n;i++){
      scanf("%f",&x[i][0]);
      
      for(j=0;j<x[i][0];j++){
       scanf("%f",&k);
       if(j==0){
       x[i][1]=k;
       }else{
       x[i][1]=x[i][1]+k;
             }
       }
    }
    for(i=0;i<n;i++){
       hasil=x[i][1]/x[i][0];
       printf("%.2f\n",hasil);
    }
 //   getch();
    return 0;
}
