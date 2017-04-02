#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double scoreX(char x) {
	if (x=='S') return 5.0;
	else if (x=='A') return 4.0;
	else if (x=='B') return 3.0;
	else if (x=='C') return 2.0;
	else if (x=='D') return 1.0;
	else return 0.0;
}

char valChar(int value) {
	if (value==5) return 'S';
	else if (value==4) return 'A';
	else if (value==3) return 'B';
	else if (value==2) return 'C';
	else if (value==1) return 'D';
	else return 'E';
}

int main() {
	char ch1, ch2, ch3;
	scanf("%c %c %c",&ch1,&ch2,&ch3);
	double score[6] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0};

	double totalScore = scoreX(ch1) + scoreX(ch2) + scoreX(ch3);
	totalScore /= 3.0;

	char sign ;
	double lala = totalScore - floor(totalScore);
	if (lala >= 0.5) {
		sign = '-';
	}
	else if (lala==0) {
		sign = '0';
	}
	else sign = '+';

	//printf("%.2lf %.2lf %c\n",totalScore, floor(totalScore), sign);

	char nilai;
	if (sign == '+') {
		nilai = valChar((int) floor(totalScore));
	}
	else if (sign=='-') {
		nilai = valChar((int) floor(totalScore)+1.0);
	}
	else nilai = valChar((int) floor(totalScore));

	if (sign!='0')
		printf("%c%c\n",nilai,sign);
	else printf("%c\n",nilai);

	return 0;
}