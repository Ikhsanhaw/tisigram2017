#include<stdio.h>
#include<string.h>

int main(){
	long int p,k,h;
	scanf("%ld",&p);
	scanf("%ld",&k);
	scanf("%ld",&h);
	printf("%ld\n",p);
	if(p!=0){
		printf("%ld\n",p+k);
	}
	else{
		printf("mustahil!\n");
	}
	if((p-h)>=0){
		printf("%ld\n",p-h);
	}
	else{
		printf("mustahil!\n");
	}
	return 0;
}
