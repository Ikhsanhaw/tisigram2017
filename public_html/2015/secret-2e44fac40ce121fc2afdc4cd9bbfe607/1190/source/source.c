#include <stdio.h>

int main(){
	char a[3];
	
	float sum=0;
	int i;
	
	for(i=0;i<3;i++){
		scanf(" %c",&a[i]);
		if(a[i]=='S'){
			sum+=5;
		}else if(a[i]=='A'){
			sum+=4;
		}else if(a[i]=='B'){
			sum+=3;
		}else if(a[i]=='C'){
			sum+=2;
		}else if(a[i]=='D'){
			sum+=1;
		}
	}
	sum=sum/3;
	
	if(sum==0){
		printf("E");
	}else if(sum>0 && sum<0.5){
		printf("E+");
	}else if(sum>=0.5 && sum<1){
		printf("D-");
	}else if(sum==1){
		printf("D");
	}else if(sum>1 && sum<1.5){
		printf("D+");
	}else if(sum>=1.5 && sum<2){
		printf("C-");
	}else if(sum==2){
		printf("C");
	}else if(sum>2 && sum<2.5){
		printf("C+");
	}else if(sum>=2.5 && sum<3){
		printf("B-");
	}else if(sum==3){
		printf("B");
	}else if(sum>3 && sum<3.5){
		printf("B+");
	}else if(sum>=3.5 && sum<4){
		printf("A-");
	}else if(sum==4){
		printf("A");
	}else if(sum>4 && sum<4.5){
		printf("A+");
	}else if(sum>=4.5 && sum <5){
		printf("S-");
	}else{
		printf("S");
	}
	printf("\n");
	return 0;
}