#include<stdio.h>

int cekNilai(char);
void hasil(int);

int main(){
	char a,b,c;
	int a1,a2,a3;
	
	scanf("%c\n",&a);
	scanf("%c\n",&c);
	scanf("%c",&b);
	
	a1=cekNilai(a);
	a2=cekNilai(c);
	a3=cekNilai(b);
	
	a1=(a1+a2+a3)/3;
	hasil(a1);
	printf("\n");
	
}

int cekNilai(char a){
	if(a=='S'){
		return 100;
	}else if(a=='A'){
		return 80;
	}else if(a=='B'){
		return 60;
	}else if(a=='C'){
		return 40;
	}else if(a=='D'){
		return 20;
	}else{
		return 0;
	}
}
void hasil(int a){
	if(a<=100*1/16){
		printf("E");
	}else if(a<100*2/16){
		printf("E+");
	}else  if(a<=100*3/16){
		printf("D-");
	}else  if(a<=100*4/16){
		printf("D");
	}else  if(a<=100*5/16){
		printf("D+");
	}else  if(a<=100*6/16){
		printf("C-");
	}else  if(a<=100*7/16){
		printf("C");
	}else  if(a<=100*8/16){
		printf("C+");
	}else  if(a<=100*9/16){
		printf("B-");
	}else if(a<=100*10/16){
		printf("B");
	}else if(a<=100*11/16){
		printf("B+");
	}else if(a<=100*12/16){
		printf("A-");
	}else if(a<=100*13/16){
		printf("A");
	}else if(a<=100*14/16){
		printf("A+");
	}else if(a<=100*15/16){
		printf("S-");
	}else{
		printf("E");
	}
}
