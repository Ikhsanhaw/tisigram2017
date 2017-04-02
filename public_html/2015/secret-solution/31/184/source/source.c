#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int A[10000];



int kelipatan(int a){
    if(a%2==0){
        if(a%3==0){
            if(a%4==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}

int hasiltukar(int a){
    if(A[a]!=-1){
        return A[a];
    }
    if(kelipatan(a)==0){
        return a;
    }
    else{
        A[a] =  hasiltukar(a/2)+hasiltukar(a/3)+hasiltukar(a/4);
        return A[a];
    }
}

int main(){
int emas,hasil,i;

scanf("%d",&emas);

for(i=0;i<9999;i++){
    A[i] = -1;
}

hasil = hasiltukar(emas);

printf("%d\n",hasil);
return 0;
}

