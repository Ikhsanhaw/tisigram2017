#include <stdio.h>
#include <stdbool.h>

int main(){
	int T, N, i,j;
	struct nilaiMhs{
		int matkul;
		int nilai[100];
		int status;
	}mhs[10];
	
	scanf("%d",&T);
	for(i=0;i<T;i++){
		mhs[i].status=1;
		scanf("%d",&N);
		for(j=0;j<N;j++){
			scanf("%d",&mhs[i].nilai[j]);
			if(mhs[i].nilai[j] < 60){
				mhs[i].status = 0;
			}
		}	
	}
	
	for(i=0;i<T;i++){
		if(mhs[i].status == 0){
			printf("anda harus remedial\n");
		}else{
			printf("lulus\n");
		}
	}
	return 0;
}
