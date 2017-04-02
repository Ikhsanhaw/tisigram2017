#include <stdio.h>
#include <ctype.h>

int main(){
    int i,a,b,x,y,X,hasil;
    scanf("%d %d", &a,&b);
    scanf("%d %d", &x,&y);

    for(i=x;i>=1;i--){
        hasil = (i * a) + ((x-i)*b);
       if(hasil == y){
            if(( (i==0) ||((x-i)==0) ) || ((i<0) ||((x-i)<0) )|| ((i%1!=0) ||((x-i)%1!=0) )) {
                printf("mustahil\n");
            }else
           printf("%d %d \n", i,x-i);
    return 0;

       }
    }
    return 0;

}
