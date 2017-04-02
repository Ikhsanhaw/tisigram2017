/* Jumlahkan Digit-digitnya
 * Author : Muhammad Husain Fadhlullah
 * Date : 05/03/2016
 * Version : 00
 */

#include <stdio.h>
int main(){
	int sum=0;
	int X;
	scanf("%d",&X);
	while(X>=0){
		sum = sum + (X%10);//get last digit
		X = X/10; //cut last digit
	}
	printf("%d\n",sum);
	return 0;
}