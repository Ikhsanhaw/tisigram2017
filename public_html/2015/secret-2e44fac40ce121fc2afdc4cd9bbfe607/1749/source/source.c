#include <stdio.h>
//#include <conio.h>

int main(){
    int n;
    scanf("%d)",&n);
    long unsigned int x[n][6];
    int i,j;
    for(i=0;i<n;i++){
      for(j=0;j<6;j++){
       scanf("%ld",&x[i][j]);
       if(j==0){
       x[i][0]=x[i][j];
       }else{
       x[i][0]=x[i][0]+ x[i][j];
             }
       }
    }
    j=0;
    for(i=0;i<n;i++){
       printf("%d\n",x[i][j]);
    }
   // getch();
    return 0;
}
