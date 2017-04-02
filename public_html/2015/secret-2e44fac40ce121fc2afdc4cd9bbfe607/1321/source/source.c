#include <stdio.h>

int main(){
	int angka;
	scanf("%d",&angka);
	
	int i,j,k;
	for(i=1;i<=angka;i++){
		for(j=1;j<=angka;j++){
			for(k=1;k<=angka;k++){
				if(i!=j && j!=k && k!=i){
					if((j>i && j>k) || (j<i && j<k)){
						printf("%d%d%d\n",i,j,k);
					}
				}
			}
		}
	}
}
