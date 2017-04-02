#include <stdio.h>
int main()
{
	 int w,x,y,z,k,l;
	 scanf("%d %d", &w, &x);
	 scanf("%d %d", &y, &z);

	 if ((w,x,y,z>=0) && (w,x,y,z<=1000000))
	 {
					k=w+x;
					l=y-z;
					printf("%d\n", k);
					printf("%d\n", l);
	 }

	 return 0;
}
