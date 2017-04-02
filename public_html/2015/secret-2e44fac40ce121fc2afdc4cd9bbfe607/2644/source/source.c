#include <stdio.h>

void cetak(int n,int k){
	int i;
	for(i=1;i <=n ; i++){
		if(i%2 == k){
			printf("%d\n",i);
		}
	}
}

int main(){
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	
	cetak(x,y%2);
	printf("\n");
	return 0;
}




