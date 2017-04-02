#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	 int n;
	 scanf("%d", &n);
	 n=fmod(pow(n,n), 2);
	 printf("%d\n", n);
	 return 0;
}
