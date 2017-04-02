#include <stdio.h>

int main(){
	char a,b,c;
	int i,j=0;
	
	scanf("%c\n",&a);
	scanf("%c\n",&b);
	scanf("%c",&c);
	
	for(i=0;i<3;i++){
	if(a=='S'){
		j=j+5;
	}
	else if(a=='A'){
		j=j+4;
	}
	else if(a=='B'){
		j=j+3;
	}
	else if(a=='C'){
		j=j+2;
	}
	else if(a=='D'){
		j=j+1;
	}
	else if(a=='E'){
		j=j+0;
	}
	if(i==0){
		a=b;
	}
	else if(i==1){
		a=c;
	}
	}
		
	if(j==15){
		printf("S");	
	}
	else if(j==14){
		printf("S-");	
	}
	else if(j==13){
		printf("A+");	
	}
	else if(j==12){
		printf("A");	
	}
	else if(j==11){
		printf("A-");	
	}
	else if(j==10){
		printf("B+");	
	}
	else if(j==9){
		printf("B");	
	}
	else if(j==8){
		printf("B-");	
	}
	else if(j==7){
		printf("C+");	
	}
	else if(j==6){
		printf("C");	
	}
	else if(j==5){
		printf("C-");	
	}
	else if(j==4){
		printf("D+");	
	}
	else if(j==3){
		printf("D");	
	}
	else if(j==2){
		printf("D-");	
	}
	else if(j==1){
		printf("E+");	
	}
	else if(j==0){
		printf("E");	
	}
	printf("\n");
return 0;
}
