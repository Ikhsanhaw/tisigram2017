#include<stdio.h>

int main(){
	int pucuk,naik,turun,H,i,j,keluar;
	scanf("%d %d %d",&naik,&turun,&H);
	i=0;
	pucuk=0;
	keluar=0;
	
	if(turun>=naik){
		printf("mustahil\n");
	}else{
	while(keluar==0){		
		pucuk=pucuk+naik;
		if(pucuk>=H){
			keluar=1;
		}
		if(keluar==0){
		pucuk=pucuk-turun;
		}
		i++	;	
	}
	printf("%d\n",i);
	}
}
