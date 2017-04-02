#include <stdio.h>

int main(){
	int cases;
	scanf("%d",&cases);
	float rata2[cases];
	int c=0;
	int c2;
	
	float temp;
	int jmatkul;
	float total;
	while(c!=cases){
		total=0;
		scanf("%d",&jmatkul);
		c2=0;
		while(c2!=jmatkul){
			scanf("%f",&temp);
			total = temp +total;
			c2++;
		}
		rata2[c]=total/jmatkul;
		c++;
	}
	
	c=0;
	while(c!=cases){
		printf("%.2f\n",rata2[c]);
		c++;
	}
}


