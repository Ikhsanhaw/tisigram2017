#include<stdio.h>
#include<math.h>

void makeMountain(int level);

int main(){
	int N;
	int i,j=2,k;
	scanf("%d", &N);
	
	makeMountain(N);
	

	return 0;
}

void makeMountain(int level){
	int i;
	if (level== 1){
		printf("*\n");
	}
	else{
		if (level == 2){
			printf("*\n");
			printf("**\n");
			printf("*\n");
		}
		else{
			makeMountain(level-1);
			for(i = 1; i <= level; i++){
				printf("*");
			}
			printf("\n");
			makeMountain(level-1);
		}
	}
	
}
