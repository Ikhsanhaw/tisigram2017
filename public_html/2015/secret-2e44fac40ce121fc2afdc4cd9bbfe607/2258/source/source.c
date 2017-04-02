#include <stdio.h>
int main(){
    int a,x,y,b,c,d,f;
    int angka,bilangan1 = 0,bilangan2 = 0;
    int z[10000];
    scanf("%d",&a); 
    for(x = 1;x<=a;x++){
    scanf("%d",&b); 
    angka = b;
    while(angka>0){
               bilangan1=angka%10;
               if((bilangan1==1&&bilangan2==3)||bilangan1==4){
                                               z[x]=-1;
                                               }
               bilangan2=bilangan1;
               angka=angka/10;
               }
    scanf("%d",&c); 
    angka = c;
    
    while(angka>0){
               bilangan1=angka%10;
               if((bilangan1==1&&bilangan2==3)||bilangan1==4){
                                               z[x]=-1;
                                               }
               bilangan2=bilangan1;
               angka=angka/10;
               }
    scanf("%d",&d);
    angka = d;
    while(angka>0){
               bilangan1=angka%10;
               if((bilangan1==1&&bilangan2==3)||bilangan1==4){
                                               z[x]=-1;
                                               
                                               }
               bilangan2=bilangan1;
               angka=angka/10;
               }
    if(z[x]==-1){
                 continue;
                 }
    z[x] = b; 
          for(y=1;y<d;y++){
                           if(y%13==0||y%4==0){
                            continue;
                           }else{
                                 z[x]+=c;
                                 }
          } 
    }
    for(x = 1;x<=a;x++){
          if(z[x]==-1){
                       printf("angka mitos\n");
                       }else
		printf("%d\n",z[x]);
    }
    return 0;
}
