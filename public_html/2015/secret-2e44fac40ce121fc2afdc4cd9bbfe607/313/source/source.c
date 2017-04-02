#include <stdio.h>

int main(){
	int cases;
	int a,b;
	scanf("%d",&cases);
	int i=0;
	while(i!=cases){
		scanf("%d",&b);
		if(i==0){
			a=b;
		}
		if(b>a){
			a=b;
		}
		i++;
	}
	printf("%d\n",a);
	return 0;
}
