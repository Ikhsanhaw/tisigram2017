#include<stdio.h>
#include<string.h>

int main(){
	long int p,k,h;
	scanf("%d",&p);
	scanf("%d",&k);
	scanf("%d",&h);
	printf("%d\n",p);
	if(p!=0){
		printf("%d\n",p+k);
	}
	else{
		printf("musthail!\n");
	}
	if((p-h)>=0){
		printf("%d\n",p-h);
	}
	else{
		printf("mustahil!\n");
	}
	return 0;
}
