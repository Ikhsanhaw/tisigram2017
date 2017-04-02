#include<stdio.h>
#include<string.h>


int ceknilai(char C);
char skillguild(int A);

int main(){

	char A[3];
	int hasil= 0;
	scanf("%c %c %c",&A[0], &A[1], &A[2]);
	for(int i =0; i<3;i++){
	hasil = hasil+ceknilai(A[i]);
}
	hasil = hasil/3;
	printf("%c",skillguild(hasil));
return 0;
}

int ceknilai(char C){
	switch(C){
		case 'S' : {return 16; break;}
		case 'A' : {return 13; break;}
		case 'B' : {return 10; break;}
		case 'C' : {return 7; break;}
		case 'D' : {return 4; break;}
		case 'E' : {return 1; break;}
	}
}
char skillguild(int A){
	switch(A){
		case 1:  { return 'E'; break;}
		case 2:  { return 'E+'; break;}
		case 3:  { return 'D-'; break;}
		case 4:  { return 'D'; break;}
		case 5:  { return 'D+'; break;}
		case 6:  { return 'C-'; break;}
		case 7:  { return 'C'; break;}
		case 8:  { return 'C+'; break;}
		case 9:  { return 'B-'; break;}
		case 10:  { return 'B'; break;}
		case 11:  { return 'B+'; break;}
		case 12:  { return 'A-'; break;}
		case 13:  { return 'A'; break;}
		case 14:  { return 'A+'; break;}
		case 15:  { return 'S-'; break;}
		case 16:  { return 'S'; break;}

}
}