#include <stdio.h>

int main(){
	int i, j, obj, miniatur = 0, end = 0, count, sama;
	scanf("%d", &obj);
	int A[obj];
	for(i = 0 ; i < obj ; i++){
		scanf("%d", &A[i]);
	}
	i = 0;
	while(i < obj - 1 && end == 0){
		j = i + 1;
		count = 1;
		sama = 0;
		while(j < obj){
			if(A[i] == A[j]){
				count++;
				sama = 1;
			}
			j++;
		}
		if(sama == 0){
			miniatur = miniatur + A[i];
		}
		if(count > A[i]){
			end = 1;
			miniatur = -1;
		}
		i++;
	}
	
	printf("%d\n", miniatur);
	
	return 0;
}
