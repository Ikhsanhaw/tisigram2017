/* Piramid 3D
 * Author: Muhammad Husain Fadhlullah
 * Date: 20/03/2016
 * Version: 00
 */

#include <stdio.h>

long long pascal(int num);

int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%lld ",pascal(i)/(pascal(j)*pascal(i-j)));
		}
		printf("\n");
	}
}
long long pascal(int num){
     long long f=1;
	 int i=1;
	 while(i<=num){
	 	f=f*i;
	 	i++;
	 }
	 return f;
}
