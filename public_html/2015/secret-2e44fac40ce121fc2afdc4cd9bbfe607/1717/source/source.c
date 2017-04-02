#include <stdio.h>

int main(){
	int cases;
	scanf("%d",&cases);
	int jumlah[cases];
	int c=0;
	int c2;
	
	int temp;
	int jmatkul;
	int total;
	while(c!=cases){
		total=0;
		c2=0;
		while(c2!=6){
			scanf("%d",&temp);
			total = temp +total;
			c2++;
		}
		jumlah[c]=total;
		c++;
	}
	
	c=0;
	while(c!=cases){
		printf("%d\n",jumlah[c]);
		c++;
	}
}
