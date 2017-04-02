#include <stdio.h>

int main(){
	 int x,h,i;
	 scanf ("%d %d", &x, &h);

	 if (((x>=0) && (x<=500)) && (h<=10000))
	 {
		if (((x<=h) && (x!=0)) && (h%x==0))
		{
			 i = h/x;
			printf("%d\n", i);
		}
		 else
			{
				printf("mustahil\n");
			}
		}

			return 0;
	 }



