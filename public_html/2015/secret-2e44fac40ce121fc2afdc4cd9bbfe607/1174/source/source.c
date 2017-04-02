#include <stdio.h>

int main(){
	long long n;
	scanf("%d",&n);
	long long x[n];
	int i=0;
	int j=0;
	int c=0;
	long long y[n];
	int a=0;
	int k=0;
	int ad=0;
	for(i=0;i<n;i++){
		scanf("%l",&x[i]);
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
		j=0;
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
	long long sum=0;
	if(c!=-1){
		for(i=0;i<a;i++){
			sum+=y[i];
		}
		printf("%d\n",sum);
	}else{
		printf("-1\n");
	}
	return 0;
}