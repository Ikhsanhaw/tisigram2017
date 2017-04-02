#include <stdio.h>
#include <string.h>

int main(){
	typedef struct struk{
	char s[2];
	}n;
	char x[2],y[2],z[2];
	int i,result;
	result=0;
	n A[17];
	strcpy(A[0].s, "z");
	strcpy(A[1].s, "E");
	strcpy(A[2].s, "E+");
	strcpy(A[3].s, "D-");
	strcpy(A[4].s, "D");
	strcpy(A[5].s, "D+");
	strcpy(A[6].s, "C-");
	strcpy(A[7].s, "C");
	strcpy(A[8].s, "C+");
	strcpy(A[9].s, "B-");
	strcpy(A[10].s, "B");
	strcpy(A[11].s, "B+");
	strcpy(A[12].s, "A-");
	strcpy(A[13].s, "A");
	strcpy(A[14].s, "A+");
	strcpy(A[15].s, "S-");
	strcpy(A[16].s, "S");

	scanf("%s", &x);
	scanf("%s", &y);
	scanf("%s", &z);
	
	for(i=1; i<=16; i++){
		if(strcmp(x,A[i].s)==0){
			result = result + i;
		}
	}
		for(i=1; i<=16; i++){
		if(strcmp(y,A[i].s)==0){
			result = result + i;
		}
	}
		for(i=1; i<=16; i++){
		if(strcmp(z,A[i].s)==0){
			result = result + i;
		}
	}
	result = result/3;
	
	printf("%0.2s\n", A[result].s);
	return 0;
}
