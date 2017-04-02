#include<stdio.h>
int main(){
	int rsl,c,tc,x;
	scanf("%d",&tc);
	while(tc--){
		rsl=0;c=10;
		scanf("%d",&x);
		while(1){
		if(x==0){
			rsl=1;
			break;
		}else
		if(x%c!=0){
			break;
		}else{
			++rsl;
			c*=10;
		}	
		}
		
		printf("%d\n",rsl);
	}
	return 0;
}
