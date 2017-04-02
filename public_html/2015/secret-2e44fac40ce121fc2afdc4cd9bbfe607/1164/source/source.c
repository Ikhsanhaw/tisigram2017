#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int x[n],y[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	int a;
	int b;
	int c;
	int j;
	for(i=0;i<n;i++){
		if(x[i]==y[i]){
			a=1;
			b=1;
		}else{
			if(x[i]>y[i]){
				c=y[i];
			}else{
				c=x[i];
			}
			a=y[i];
			b=x[i];
			for(j=c;j>0;j--){
				if(a%j==0 && b%j==0 && j!=1){
					a=a/j;
					b=b/j;
					c=c/j;
					j=c+1;
				}
			}
		}
		printf("%d/%d\n",a,b);
	}
	return 0;
}