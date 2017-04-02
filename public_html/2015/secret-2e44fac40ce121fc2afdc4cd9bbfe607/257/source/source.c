#include <stdio.h>

int main(){
	int i,j,limit,temp;
	scanf("%d",&limit);
	int x[limit];
	for(i=0;i<limit;i++){
		scanf("%d",&x[i]);
		}
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			if(x[i]>x[j]){
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}	
		printf("%d\n",x[0]);
	return 0;
}
