#include <stdio.h>
//#include <string.h>

int main(){
		int x,y,i;
		scanf("%d %d",&x,&y);
		for(i=y-1;i>=x;i--){
			if(i!=y-1){
				printf(" ");
			}
			printf("%c",65+i);
		}
		printf("\n");
		
	return 0;
}
