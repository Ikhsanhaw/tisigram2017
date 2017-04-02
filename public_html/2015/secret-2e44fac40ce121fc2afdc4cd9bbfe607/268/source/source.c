#include <stdio.h>
//#include <string.h>

int main(){
		int x,y,i;
		scanf("%d %d",&x,&y);
		for(i=y-x-1;i>=0;i--){
			if(i!=y-x-1){
				printf(" ");
			}
			printf("%c",65+i+x);
		}
		printf("\n");
		
	return 0;
}
