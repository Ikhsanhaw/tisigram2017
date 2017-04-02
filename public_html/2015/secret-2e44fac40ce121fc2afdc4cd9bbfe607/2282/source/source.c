#include<stdio.h>
#include<stdbool.h>
int main(){
    int q,w,e,r,tinggi=0,temp;bool bo=false;
    scanf("%d%d%d",&q,&w,&e);
    temp=q+(q-w)*14+2*q*5-w*4*3;
//    printf("%d ",temp);
         tinggi=q;r=1;
         if(tinggi>=e)printf("1\n");
         else{
             while(tinggi<e){
                  if(r%5==0)tinggi-=4*w;
                  tinggi-=w;if(tinggi<0)tinggi=0;
                  ++r;
                  if(r%3==0)tinggi+=2*q;
                  tinggi+=q;
                  if(temp<=0&&r>=16){printf("mustahil\n");bo=true; break;}
                  }
                  if(bo==false)printf("%d\n",r);
             }
        
    
    //getch();
    return 0;
}
