#include<stdio.h>
#include<string.h>

int main(){
	long int p,k,h;
	scanf("%d %d",&p,&k);
	if(p){
		h=k/p;
		if((k%p)||(k==0)){
			h+=1;
		}
		printf("%d\n",h);
	}
	else{
		printf("mustahil\n");
	}
	return 0;
}
