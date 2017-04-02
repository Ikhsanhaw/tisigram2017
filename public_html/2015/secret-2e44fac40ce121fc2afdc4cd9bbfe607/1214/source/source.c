#include<stdio.h>
int main(){
	int i,n=0;
	char l[4];
	scanf("%c %c %c",&l[1],&l[2],&l[3]);
	for(i=1;i<=3;i++){
		if(l[i]=='D'){
			n=n+3;
		}else if(l[i]=='C')
		{
			n=n+6;
		}else if(l[i]=='B')
		{
			n=n+9;
		}else if(l[i]=='A')
		{
			n=n+12;
		}else if(l[i]=='S')
		{
			n=n+15;
		}
	}
	n=n/3;
	switch(n){
		case 0:
			printf("E\n");
		break;
		case 1:
			printf("E+\n");
		break;
		case 2:
			printf("D-\n");
		break;
		case 3:
			printf("D\n");
		break;
		case 4:
			printf("D+\n");
		break;
		case 5:
			printf("C-\n");
		break;
		case 6:
			printf("C\n");
		break;
		case 7:
			printf("C+\n");
		break;
		case 8:
			printf("B-\n");
		break;
		case 9:
			printf("B\n");
		break;
		case 10:
			printf("B+\n");
		break;
		case 11:
			printf("A-\n");
		break;
		case 12:
			printf("A\n");
		break;
		case 13:
			printf("A+\n");
		break;
		case 14:
			printf("S-\n");
		break;
		case 15:
			printf("S\n");
		break;
	}
	return 0;
}
