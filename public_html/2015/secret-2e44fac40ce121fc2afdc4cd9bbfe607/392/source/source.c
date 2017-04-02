#include <stdio.h>

int main(){
	int testcase,i,j,total;
	int jml_matkul;
	int nilai[10][100];

	scanf("%d", &testcase);
	int jml[testcase];
	
	for (i = 0; i <testcase; i++){
		scanf("%d", &jml_matkul);
		jml[i] = jml_matkul;
		for (j = 0; j < jml_matkul; j++){
			scanf("%d", &nilai[i][j]);
		}
	}
	
	int found = 0;
	for(i = 0; i < testcase;i++){
		j = 0;
		while (j < jml[i] && found == 0){
			if (nilai[i][j] < 60){
				found = 1;
			}
			j++;
		}
		if (found == 1){
			printf("anda harus remedial\n");
		}
		else{
			printf("lulus\n");
		}
	}
	
	return 0;
}
