#include <stdio.h>

int main(){
	//65 ascii A;

	int n, hurufKe,i=1;

	scanf("%d %d", &n, &hurufKe);

	for (i = 1; i <= n; i++)
	{
		if(i==n){
			printf("%c\n", 65+hurufKe-i);	
		}else{
			printf("%c ", 65+hurufKe-i);	
		}	
	}

	return 0;
}
