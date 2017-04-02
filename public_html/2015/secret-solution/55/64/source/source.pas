#include <stdio.h>
#include <stdlib.h>

int main(){
int punya,mati,lahir;

scanf("%d",&punya);
scanf("%d",&lahir);
scanf("%d",&mati);

if(mati > punya && punya!=0){
    printf("%d\n",punya);
    printf("%d\n",lahir+punya);
    printf("mustahil!\n");
}
else if(punya == 0 && lahir>0){
    printf("%d\n",punya);
    printf("mustahil!\n");
    printf("mustahil!\n");
}
else{
    printf("%d\n",punya);
    printf("%d\n",lahir+punya);
    printf("%d\n",punya-mati);
}
return 0;
}
