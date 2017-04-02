#include <stdio.h>
#include <stdbool.h>

int main(){
	int n,hasil1,i;
	bool kondisi=false;	
	
	scanf("%d",&n);
	while (n%2==0 && n>2){
		n=n/2;
		if(n%2==1){
			kondisi=true;
		}
	}
	
	if(n>2 || kondisi==true){
		printf("FALSE\n");
	}else{
		printf("TRUE\n");
	}
	
}

