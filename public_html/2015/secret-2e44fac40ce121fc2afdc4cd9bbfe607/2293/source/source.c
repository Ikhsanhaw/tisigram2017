#include <stdio.h>

int main(){
    int i,n,m,digit,satuan=0,puluhan=0,ratusan=0,ribuan=0,puluhanribu=0,jumlah;
    
    scanf("%d\n%d",&n,&m);
    jumlah=n+m;
    if(jumlah<10){
                  digit=1;
                  } else if(jumlah<100){
                         digit=2;
                         } else if(jumlah<1000){
                                digit=3;
                                } else if(jumlah<10000){
                                       digit=4;
                                       } else{
                                              digit=5;
                                              }
                                
    printf("%d\n",jumlah);
   // printf("%d\n",digit);
    
    satuan=(n+m) % 10;
    puluhanribu=(n+m)/10000;
    ribuan=(n+m)/1000-10*puluhanribu;
    ratusan=((n+m)/100)-((n+m)/1000)*10;
    puluhan=((n+m)/10)-((n+m)/100)*10;
    switch(digit){
                  case 2:
                  printf("%d %d\n",satuan,puluhan);
                  printf("%d %d\n",puluhan,ratusan);
                  break;
                  case 3: 
                       printf("%d %d\n",satuan,ratusan);
                       printf("%d %d\n",puluhan,ribuan);
                       printf("%d %d\n",ratusan,puluhanribu);
                       break;
                  case 4:
                       printf("%d %d\n",satuan,ribuan);
                       printf("%d %d\n",puluhan,puluhanribu);
                       printf("%d 0\n",ratusan);
                       printf("%d 0\n",ribuan);
                       break;
                  case 5:
                       printf("%d %d\n",satuan,puluhanribu);
                       printf("%d 0\n",puluhan);
                       printf("%d 0\n",ratusan);
                       printf("%d 0\n",ribuan);
                       printf("%d 0\n",puluhanribu);
                }
                
    return 0;
}
