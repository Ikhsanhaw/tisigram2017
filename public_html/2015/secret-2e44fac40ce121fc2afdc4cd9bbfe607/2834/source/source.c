#include<stdio.h>
#include<stdbool.h>

int main(){
	int day,A,B,H,jml;
	bool belumsampai;
	scanf("%d %d %d",&A,&B,&H);
	if(A<=B&&H>A){
		printf("mustahil");
	}
	else if(A>=H){
		printf("1");
	}
	else{
		jml=0;
		day=1;
		belumsampai=true;
		while(belumsampai){
			jml+=A;
			if(jml>=H){
				belumsampai=false;
			}
			else{
				jml-=B;
				day++;
			}
		}
		printf("%d",day);
	}
	printf("\n");
	return 0;
}
