#include <stdio.h>

int main(){
    int A,B,X,Y,c,d;
    scanf("%d %d %d %d",&A,&B,&X,&Y);
    if(A==B){
        printf("mustahil\n");
    }
    c=(Y-(B*X))/(A-B);
    d=(Y-(A*X))/(B-A);
    float e,f;
    e=(Y-(B*X))/(A-B);
    f=(Y-(A*X))/(B-A);

    if(c==0 || d==0){
        printf("mustahil\n");
    }
    else if(c<0 || d<0){
        printf("mustahil\n");
    }
    else if(c!=e || d!=f){
        printf("mustahil\n");
    }
    else{
        printf("%d %d",c,d);
    }

return 0;
}
