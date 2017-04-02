#include <stdio.h>

int main(){
	int a, i, bilangan[100000], temp;
	scanf("%d" , &a);
	for (i=0;i<a;i++){
		scanf("%d", &bilangan[i]);
	}
	temp=bilangan[0];
	for(i=0;i<a;i++){
		if(bilangan[i]<bilangan[i+1]){
			if(temp<bilangan[i+1]){
				temp=bilangan[i+1];
			}
		}
	}
	printf("%d\n", temp);
	return 0;
}
