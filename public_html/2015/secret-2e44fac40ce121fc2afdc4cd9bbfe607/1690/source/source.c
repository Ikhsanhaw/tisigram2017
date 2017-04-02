#include <stdio.h>
int main(){
    int i,j,x,y,z;
    scanf("%d",&j);
    float q[100], total = 0;
    for(i = 0; i<j;i++){
        scanf("%d",&y);
        for(x = 0; x<y;x++){
              scanf("%d",&z);
              total+=z;
        }
          q[i] = total/y;
    }

    for(i = 0; i<j;i++){
          printf("%g\n",q[i]);
    }
    return 0;
}
