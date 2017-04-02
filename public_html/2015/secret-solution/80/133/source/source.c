/* Piramid pascal
 * Author: Muhammad Husain Fadhlullah
 * Date: 07/04/2016
 * Version: 00
 */

#include <stdio.h>
#include <string.h>
#define MAX 1005
typedef char STRING[MAX];

int main(){
	STRING name[10], temp;
	int i,j,n;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",name[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(name[i],name[j])>0){
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}			
	}
	for(i=0;i<n;i++){
		printf("%s\n",name[i]);
	}
}
