#include <stdio.h>

int main(){
	int a[5],nilai[5],poin=0;
	int i;
	for(i=0;i<3;i++){
		scanf("%s",&a[i]);
		switch(a[i]){
			case 'S' : nilai[i]=16; 
			break; 
			case 'A' : nilai[i]=13; 
			break; 
			case 'B' : nilai[i]=10; 
			break; 
			case 'C' : nilai[i]=7;
			break; 
			case 'D' : nilai[i]=4; 
			break; 
			case 'E' : nilai[i]=1;
			break; 
		}
		poin=poin + nilai[i];
	}
	poin=poin/3;
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

