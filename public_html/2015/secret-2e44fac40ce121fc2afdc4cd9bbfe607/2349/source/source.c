#include<stdio.h>
int kardus(int jumlah);
int hadiah(int jumlah);
int main(){
    int n,tem,gelas;
    
    scanf("%d",&n);
    
    gelas = kardus(n);
    printf("%d",gelas+n+kardus(hadiah(gelas+n))+hadiah(gelas+n));
    
    getch();
    return 0;
}

int kardus(int jumlah){
    return jumlah*6;
}

int hadiah(int jumlah){
    return jumlah/20;
}
