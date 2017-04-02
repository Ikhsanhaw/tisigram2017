#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int x[n];
	int i;
	int j;
	int c=0;
	int y[n];
	int a=0;
	int k;
	int ad;
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	i=0;
	while(c!=-1 && i<n){
		j=0;
		c=0;
		if(i==0){
			y[a]=x[i];
			a++;
		}else{
			ad=0;
			k=0;
			while(k<a && ad!=1){
				if(y[k]==x[i]){
					ad=1;
				}
				k++;
			}
			if(ad!=1){
				y[a]=x[i];
				a++;
			}
		}
		while(c!=-1 && j<n){
			if(x[i]==x[j]){
				c++;
				if(c>x[i]){
					c=-1;
				}
			}
			j++;
		}
		i++;
	}
	int sum=0;
	if(c!=-1){
		for(i=0;i<a;i++){
			//printf("%d\n",y[i]);
			sum+=y[i];
		}
		printf("%d\n",sum);
	}else{
		printf("-1\n");
	}
	return 0;
}