/* Kue Manis
 * Author: Muhammad Husain Fadhlullah
 * Date: 20/03/2016
 * Version: 00
 */


#include<stdio.h>

int main(){
	int n,a,b,c;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int count=0;
    int temp1,temp2;
    int m=300000;
	int i,j;
	if(n>=10 && n<=m){
        for(i=n-1;i>0;i--){
            if(i%a==0){
                count++;
                if(i%b==0){
                    count++;
                    if(i%c==0){
                        count++;
                        if(count==3){
                           temp1=i;
                           i=0;
                        }
                    }
                }
            }
            count=0;
        }
    }
    count=0;
    if(n>=10 && n<=m){
        for(j=n+1;j<=m;j++){
        	if(j%a==0){
                count++;
                if(j%b==0){
                    count++;
                    if(j%c==0){
                        count++;
                        if(count==3){
                           temp2=j;
                           j=m+1;
                        }
                    }
                }
            }
        count=0;
        }
    }	
	printf("[%d, %d]\n",temp1,temp2);
	return 0;
}
    
    

