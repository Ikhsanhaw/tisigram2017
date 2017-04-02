#include <stdio.h>
#include <string.h>

int main(){
	
	unsigned long x;
	scanf("%d",&x);
	int p = 1;
	while((x%2==0) && (x>2) && (p<3)){
		x/=2;
		if(x%2==1){
			p = 0;
		}
	}
	if(x>2 || p==0){
		printf("FALSE\n");
	}else{
		printf("TRUE\n");
	}
	return 0;
}
