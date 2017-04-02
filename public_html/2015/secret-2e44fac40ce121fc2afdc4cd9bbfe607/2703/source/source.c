#include <stdio.h>

int main(){
	int x,h;
	
	scanf("%d %d",&x,&h);
		
	if(x == 0 || h == 0){
		printf("mustahil");
	}
	else{
		if(x%2==0){
			printf("%d\n",h/x);
		}
		else{
			printf("%d\n",(h/x)+1);
		}
	}
	
	return 0;
}
