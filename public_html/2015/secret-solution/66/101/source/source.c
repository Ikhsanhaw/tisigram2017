#include<stdio.h>
#include<stdlib.h>

int main(){

int i,j,k,l,m=0,input,tengah;

scanf("%d",&input);
k=input/2;
l=input%2;
tengah=k+l;

for(i=1;i<=input;i++){
	for(m=0;m<=tengah;m++){
		if(i==m+1||i==input-m){
			for(j=1;j<=input;j++){
				if(l){
				    if(j==tengah-m||j==tengah+m)
					printf("*");
				    else
					printf(" ");
				}else{
				    if(j==tengah-m || j==tengah+m+1)
					 printf("*");
				    else
					 printf(" ");
				}
			}
		}
	}
printf("\n");
}


return 0;
}
