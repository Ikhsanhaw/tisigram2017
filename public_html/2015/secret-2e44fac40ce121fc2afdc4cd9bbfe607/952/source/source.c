#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isKabisat(int tahun) {
	if (tahun%400==0) return 1;
	else if (tahun%4==0) {
		if (tahun%100!=0) {
			return 1;
		}
		else return 0;
	}
	else return 0;
}

int main() {
	char string[250];
	scanf("%s",&string);
	int len = strlen(string);
	int i;
	for (i=0; i<len; i++) {
		string[i] -= '0';
	}
	int day = string[0]*10 + string[1];
	int month = string[3]*10 + string[4];
	int year = string[6]*1000 + string[7]*100 + string[8]*10 + string[9];
	//printf("%d %d %d\n",day,month,year);

	int m, n, o;
	scanf("%d%d%d",&m,&n,&o);
	int kpk = o;
	int stop = 0;
	while (stop==0) {
		if (kpk%m==0 && kpk%n==0) {
			stop = 1;
		}
		else kpk += o;
	}

	int hari[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (isKabisat(year))
		hari[2] += 1;

	int curr_day = day;
	int curr_month = month;
	int curr_year = year;
	while (kpk>0) {
		curr_day ++;
		if (curr_day > hari[curr_month]) {
			curr_day = 1;
			curr_month ++;
		}

		if (curr_month>12) {
			curr_month = 1;
			curr_year++;
			if (isKabisat(curr_year) && hari[2]==28) {
				hari[2]++;
			}
			else if (!isKabisat(curr_year) && hari[2]==29) {
				hari[2]--;
			}
		}
		kpk--;
	}

	printf("%d/%d/%d\n",curr_day,curr_month,curr_year);

	return 0;
}