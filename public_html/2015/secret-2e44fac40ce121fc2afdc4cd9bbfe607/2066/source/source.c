#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
 char chord[100];
 int i,jmk=0,jmm=0;

 gets(chord);
 for(i=0;i<strlen(chord);i++){
    if(chord[i] == 'm'){
        jmm = jmm +1;
    }
    if(chord[i] == '#'){
        jmk = jmk +1;
    }
 }
 printf("%d %d\n", jmk,jmm);
return 0;
}
