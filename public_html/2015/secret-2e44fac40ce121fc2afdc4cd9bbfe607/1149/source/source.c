#include <stdio.h>
typedef char string[3];
int main(){
	string level[]={"E","E+","D-","D","D+","C-","C","C+","B-","B","B+","A-","A","A+","S-","S"};
	int total = 0,T=3,point;
	while(T--){
		char kemampuan;
		scanf("\n%c",&kemampuan);
		if (kemampuan == 'S')
			point = 5;
		else
			point = 'E' - kemampuan;
		total+=point;
	}
	printf("%s\n",level[total]);
	return 0;
}