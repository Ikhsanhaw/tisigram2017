/* Angka Sempurna
 * Author: Muhammad Husain Fadhlullah
 * Date: 06/04/2016
 * Version: 00
 */

 #include <stdio.h>

 int main(){
 	//angka sempurna pertama adalah 6, karena 1,2,3 adalah positif pembagi dari nilai atau angka 6 hasil dibagi bilangan 1,2,3dan 1+2+3 = 6\
 	//28,497 dsb
 	int n,i=1,j,sum=0;
 	scanf("%d",&n);
 	while(i<n){
 		if(n%i==0){
 			sum=sum+i;
 		}
 		i++;
 	}
 	if(sum==n){
 		printf("Angka Sempurna\n");
 	}else{
 		printf("Bukan Angka Sempurna\n");
 	}
 	return 0;
 }
