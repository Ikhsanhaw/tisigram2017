#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool mitos(int x);
int main(){
    int t,i,g,h,l;
    scanf("%d",&t);
    
    while(t--){       
        scanf("%d %d %d",&g,&h,&l);
        if(mitos(l)) printf("angka mitos\n");
        else{
            int count=l;
            hitung(l);
            printf("%d\n",(count-1)*h+g );
        }
    }
return 0;
}

bool mitos(int l){
     if (l<=10 &&  l!=4 )return 0;
     else if((l%10==4) || (l%100==13))return 1;
     else return mitos(l/10);     
}
int hitung(int l){
    if(l<=3) return 0;
    if(mitos(l)) return 1+hitung(l-1);
}

