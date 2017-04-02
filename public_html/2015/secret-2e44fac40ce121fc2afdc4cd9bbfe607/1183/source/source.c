#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	char x[n][100];
	int i;
	for(i=0;i<n;i++){
		scanf("%s",&x[i]);
	}
	int j;
	int k;
	int c;
	char y[100];
	int a;
	int pd;
	int cpd=0;
	int z;
	for(i=0;i<n;i++){
		c=0;
		cpd=0;
		for(j=1;j<=strlen(x[i]);j++){
			c=0;
			while(c+j<=strlen(x[i])){
				a=0;
				for(k=c;k<j+c;k++){
					y[a]=x[i][k];
					a++;
				}
				y[a]='\0';
				pd=0;
				z=0;
				while(z<strlen(y)/2 && pd==0){
					if(y[z]!=y[strlen(y)-1-z]){
						pd=1;
					}else{
						z++;
					}
				}
				if(pd==0){
					cpd++;
				}
				//printf("%s\n",y);
				c++;
			}
		}
		printf("%d\n",cpd);
	}
	
	return 0;
}