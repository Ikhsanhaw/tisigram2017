#include <stdio.h>

int main(){
	int nilai1,nilai2;
	int hasil1,hasil2;
	
	scanf("%d %d",&nilai1,&nilai2);
	if(nilai2==0){
		hasil2=nilai1;
	}else{
		hasil1=nilai1/nilai2;
		hasil2=nilai1%nilai2;
	}
	
	printf("%d %d\n",hasil1,hasil2);
}

