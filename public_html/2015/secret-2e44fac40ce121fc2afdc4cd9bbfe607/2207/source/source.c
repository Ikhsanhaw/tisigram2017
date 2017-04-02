#include<stdio.h>
int main(){
    int q,w,e,r,tinggi=0,temp;
    scanf("%d%d%d",&q,&w,&e);
    temp=q+(q-w)*14+2*q*5-w*4*3;
//    printf("%d ",temp);
    if(temp<=0&&q<e)printf("mustahil\n");
    else{
         tinggi=q;r=1;
         if(tinggi>=e)printf("1\n");
         else{
             while(tinggi<e){
                  if(r%5==0)tinggi-=4*w;
                  tinggi-=w;
                  ++r;
                  if(r%3==0)tinggi+=2*q;
                  tinggi+=q;
                  }
                  printf("%d\n",r);
             }
        
    }
    //getch();
    return 0;
}
