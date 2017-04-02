#include <stdio.h>

int main(){
	char pertama, kedua;
	int i;
	scanf("%c %c", &kedua, &pertama);

	for (i = kedua-1; i > pertama; i--)
	{
 	if(i==pertama+1){
			printf("%c\n", i);	
		}else{
			printf("%c ", i);	
		}
	}

	return 0;
}
