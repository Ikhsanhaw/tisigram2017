#include <stdio.h>

int main(){
	char hurufBesar, hurufKecil;
	int i;
	scanf("%c\n%c", &hurufBesar, &hurufKecil);

	for (i = hurufBesar-1; i > hurufKecil; i--)
	{
	printf("%c\n", i);
	}
	return 0;
}
