#include<stdio.h>

int main(){
	int i,n,c;
	scanf("%d",&n);
	if(n>=1&&n<=100){
		
	
	int d[n];
	for(i=0;i<n;i++){
		scanf("%d",&d[i]);
	}
	c=d[0];
	for(i=0;i<n-1;i++){
		if(c<=d[i+1]){
			c=d[i+1];
		}else{
			c=d[i];
		}
	}
	}
	printf("%d\n",c);
	return 0;
}
