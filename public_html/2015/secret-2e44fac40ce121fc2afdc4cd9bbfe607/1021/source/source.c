#include<stdio.h>
int main(){
	char i,j,k;
	int x=0;
	
	scanf("%c %c %c",&i,&j,&k);
	switch(i){
		case 'S':{x=x+16;break;}
		case 'A':{x=x+13;break;}
		case 'B':{x=x+10;break;}
		case 'C':{x=x+7;break;}
		case 'D':{x=x+4;break;}
		case 'E':{x=x+1;break;}
		}

	switch(j){
		case 'S':{x=x+16;break;}
		case 'A':{x=x+13;break;}
		case 'B':{x=x+10;break;}
		case 'C':{x=x+7;break;}
		case 'D':{x=x+4;break;}
		case 'E':{x=x+1;break;}
		}
		
	switch(k){
		case 'S':{x=x+16;break;}
		case 'A':{x=x+13;break;}
		case 'B':{x=x+10;break;}
		case 'C':{x=x+7;break;}
		case 'D':{x=x+4;break;}
		case 'E':{x=x+1;break;}
		}		
	
	x=x/3;
	switch(x){
		case 16:{printf("S");break;}
		case 15:{printf("S-");break;}
		case 14:{printf("A+");break;}
		case 13:{printf("A");break;}
		case 12:{printf("A-");break;}
		case 11:{printf("B+");break;}
		case 10:{printf("B");break;}
		case 9:{printf("B-");break;}
		case 8:{printf("C+");break;}
		case 7:{printf("C");break;}
		case 6:{printf("C-");break;}
		case 5:{printf("D+");break;}
		case 4:{printf("D");break;}
		case 3:{printf("D-");break;}
		case 2:{printf("E");break;}
		case 1:{printf("E-");break;}
		}	
		return 0;
}
