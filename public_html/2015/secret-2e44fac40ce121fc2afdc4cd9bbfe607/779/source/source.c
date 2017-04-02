#include<string.h>
#include<stdio.h>
main(){
	int i,ii,q;
	char w[51];
	scanf("%d",&q);
	for(ii=0;ii<q;++ii){
		scanf("%s",&w);
		for(i=0;i<strlen(w)-1;++i){
			if((int)(w[i])%2==0){
				printf("%c",w[i]);
			}
			
		}	
		printf("\n");	
	}
	
}
