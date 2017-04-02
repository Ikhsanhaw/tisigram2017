#include <stdio.h>

int main(){
	int cases;
	int a,b;
	scanf("%d",&cases);
	int i=0;
	while(i!=cases){
		scanf("%d",&b);
		if(a==NULL){
			a=b;
		}
		if(a>b){
			b=a;
		}
		i++;
	}
	printf("%d\n",b);
}
