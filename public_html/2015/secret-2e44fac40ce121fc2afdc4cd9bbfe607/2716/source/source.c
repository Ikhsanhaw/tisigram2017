#include <stdio.h>

int main(){
	int x,h;
	
	scanf("%d %d",&x,&h);
		
	if(x == 0){
		printf("mustahil\n");
	}
	else{
		if(h%x == 0 /*|| x < h*/){
			printf("%d\n",h/x);
		}
		else{
			printf("%d\n",(h/x)+1);
		}
	}
	return 0;
}
