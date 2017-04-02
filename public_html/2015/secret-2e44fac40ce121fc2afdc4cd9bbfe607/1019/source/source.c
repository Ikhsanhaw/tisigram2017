#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	int x[3];
	char a[3];
	char string[3];
	int total = 0;
	
	scanf("%c", &a[0]);
	scanf("%c", &a[1]);
	scanf("%c", &a[2]);
	
	for(int i=0 ; i<3;i++){
		
		switch(a[i]){
			case 'S': x[i] = 16; break;
			case 'A': x[i] = 13; break;
			case 'B': x[i] = 10; break;
			case 'C': x[i] = 7; break;
			case 'D': x[i] = 4; break;
			case 'E': x[i] = 1; break;
			default: break;
		}
		total = total + x[i];	
	}
	
	total = total / 3;
	
	switch(total){
		case 1: strcpy(string, "E");break;
		case 2: strcpy(string, "E+");break;
		case 3: strcpy(string, "D-");break;
		case 4: strcpy(string, "D");break;
		case 5: strcpy(string, "D+");break;
		case 6: strcpy(string, "C-");break;
		case 7: strcpy(string, "C");break;
		case 8: strcpy(string, "C+");break;
		case 9: strcpy(string, "B-");break;
		case 10: strcpy(string, "B");break;
		case 11: strcpy(string, "B+");break;
		case 12: strcpy(string, "A-");break;
		case 13: strcpy(string, "A");break;
		case 14: strcpy(string, "A+");break;
		case 15: strcpy(string, "S-");break;
		case 16: strcpy(string, "S");break;
	}
	
	printf("%0.2s\n",string);

	return 0;
	
}
