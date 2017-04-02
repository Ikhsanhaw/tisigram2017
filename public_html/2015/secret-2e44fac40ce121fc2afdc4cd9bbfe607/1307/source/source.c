#include <stdio.h>

int main(){
	int m,n;
	scanf("%d",&n);
	scanf("%d",&m);
	if(m==0){
		printf("%d %d\n",0,n);	
	}else{
		printf("%d %d\n",n/m,n%m);	
	}
return 0;
}
