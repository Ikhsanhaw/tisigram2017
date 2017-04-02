#include <stdio.h>

int main(){
	char *hari[] = {"kamis","jumat","sabtu","minggu","senin","selasa","rabu"};
	int tgl, i, j;
	
	scanf("%d",&tgl);
	j = 0;
	for(i = 0; i < tgl-1; i++){
		if(j < 6){
			j++;
		}
		else{
			j = 0;
		}
	}
	printf("%s",hari[j]);
		
	return 0;
}
