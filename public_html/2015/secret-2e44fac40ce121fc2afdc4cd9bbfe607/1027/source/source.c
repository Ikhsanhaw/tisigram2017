
#include<stdio.h>

int main(){
	int x[11],n,i,a=0,b=0,c=0,d=0,hasil;
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d ",&x[i]);
	}
	scanf("%d",&x[n-1]);
	for(i=0;i<n;i++){
		if(x[i]<5 && x[i]>0){
		switch(x[i]){
			case 1:a=a+1;
				break;	
			case 2:b=b+1;
				break;
			case 3:c=c+1;
				break;
			case 4:d=d+1;
				break;
			}
		} else{
			hasil=-1;
		}
		
	}
	if(a<=1 && b<=2 && c<=3 && d<=4){
		hasil=10;
		printf("%d\n",hasil);
	} else{
		hasil=-1;
		printf("%d\n",hasil);
	}
	return 0;
	
}
