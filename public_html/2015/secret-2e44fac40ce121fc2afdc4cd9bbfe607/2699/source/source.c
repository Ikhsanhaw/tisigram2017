#include <stdio.h>

int main(){
	int l,m,n;
	
	scanf("%d",&n);
	if(n==0)
		printf("0");
		else if(n==1)
				printf("2");
				else if (n==2)
						printf("8");
					else if(n>2){				
					m=8;
					for(l=3;l<=n;l++){
						m=m+6+4*(l-2);}
					printf("%d",m);}
	return 0;
}
		
