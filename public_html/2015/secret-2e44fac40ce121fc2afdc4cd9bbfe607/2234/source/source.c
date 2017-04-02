#include <stdio.h>

//Aku jatuh cinta dengan faktorial
//Berhenti runtimeerror

int main() {
	 int m=1,n=1,l=1,k=1,a=1,b=1,c=1;
	 scanf("%d",&m);
	 scanf("%d",&n);
	 l=m-n;
	 while (l > 0) {
			 a=a*l;
			 l=l-1;
	 }
	 while (m > 0) {
			 b=b*m;
			 m=m-1;
	 }
	 while (n > 0) {
			 c=c*n;
			 n=n-1;
	 }
	 k=b/(c*a);
	 printf("%d\n",k);
	 return 0;
}
