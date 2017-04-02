#include <stdio.h>
#include <math.h>

int main(){
	int cases;
	scanf("%d",&cases);
	float batas=pow(2,64)-1;
	int c=0;
	float casez;
	int hasil[cases];
	while(c!=cases){
		scanf("%f",&casez);
		if(casez>batas){
			hasil[c]=0;
		}else{
			hasil[c]=1;
		}
		c++;
	}
	
	c=0;
	while(c!=cases){
		if(hasil[c]==1){
			printf("true\n");
		}else{
			printf("false");
		}
		c++;
	}
}


