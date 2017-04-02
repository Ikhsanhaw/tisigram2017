#include <stdio.h>

int main(){
	
	int skill[5],poin=0,nilai;
	int i;
	
	for(i=0;i<3;i++){
		scanf("%s",&skill[i]);
		switch(skill[i]){
			case 'S' : nilai = 16; 
			break; 
			case 'A' : nilai = 13; 
			break; 
			case 'B' : nilai = 10; 
			break; 
			case 'C' : nilai = 7;
			break; 
			case 'D' : nilai = 4; 
			break; 
			case 'E' : nilai = 1;
			break; 
		}
		poin = poin + nilai;
	}
	
	poin = poin / 3;
//	printf("%d",poin);
	
	if(poin==16){
		printf("S");
	}else 
	if(poin==15){
		printf("S-");
	}else 
	if(poin==14){
		printf("A+");
	}else
	if(poin==13){
		printf("A");
	}else
	if(poin==12){
		printf("A-");
	}else
	if(poin==11){
		printf("B+");
	}else
	if(poin==10){
		printf("B");
	}else
	if(poin==9){
		printf("B-");
	}else
	if(poin==8){
		printf("C+");
	}else
	if(poin==7){
		printf("C");
	}else
	if(poin==6){
		printf("C-");
	}else
	if(poin==5){
		printf("D+");
	}else
	if(poin==4){
		printf("D");
	}else
	if(poin==3){
		printf("D-");
	}else
	if(poin==2){
		printf("E+");
	}else
	if(poin==1){
		printf("E");
	}
	printf("\n");	
return 0;
}

