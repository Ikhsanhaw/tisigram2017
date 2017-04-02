#include <stdio.h>
#include <string.h>

int main(){
	int i, j, k, health[3];
	char act[20];
	scanf("%d", &i);
	scanf("%d %d %d\n", &health[0], &health[1], &health[2]);
	for(j=0;j<i;j++){
		gets(act);
		if(strcmp(act, "Hit") == 0){
			for(k=0;k<3;k++){
				health[k] -= 70;
				if(health[k] < 0) health[k] = 0;
			}
		}
		else if(strcmp(act, "MegaPotion") == 0){
			for(k=0;k<3;k++){
				if(health[k] > 0) health[k] += 100;
				if(health[k] > 150) health[k] = 150;
			}
		}
		else {
			for(k=0;k<3;k++){
				if(health[k] == 0) health[k] += 50;
			}
		}
		printf("%d %d %d\n", health[0], health[1], health[2]);
		if((health[0] == 0)&&(health[1] == 0)&&(health[2] == 0)){
			printf("game over\n");
			break;
		}
	}
	return 0;
}
