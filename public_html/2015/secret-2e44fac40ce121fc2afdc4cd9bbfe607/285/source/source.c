#include <stdio.h>
#include <string.h>

int main(){
	int N;
	char halo[20]={"Halo, Indah!"};
	scanf("%d",&N);
	for(N=0;N<3;N++){
		printf("%s\n",halo);
	}
	return 0;
}
