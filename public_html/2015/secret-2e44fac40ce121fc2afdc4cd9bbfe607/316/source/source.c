#include <stdio.h>

int main(){
	char pertama, kedua;
	int i;
	scanf("%c %c", &kedua, &pertama);

	for (i = (int)kedua-1; i > (int)pertama; i--)
	{
		if(i==(int)pertama+1){
			printf("%c\n", i);	
		}else{
			printf("%c ", i);	
		}
	}

	return 0;
}
