#include<stdio.h>
#include<math.h>

int main (){
	int i, j, kasusuji, nmatkul, nilai[100], lulus[10]; 

// input //

	scanf("%d ", &kasusuji);
	for (i=0; i<kasusuji;i++){
	
		scanf("%d", &nmatkul);
		lulus[i]=1;
		for (j=0; j<nmatkul;j++)
		{
			if(j==nmatkul-1)
			{
				scanf("%d/n", &nilai[j]);
			} else {
				scanf("%d ", &nilai[j]);
			}
			 if(nilai[j] < 60)
			{
				lulus[i]=0;
			}
		}
	}
	
	
// output //
	
	for (i=0; i<kasusuji; i++)
	{
		if(lulus[i] == 0)
		{
			printf("anda harus remedial\n");
		} else {
			printf("lulus\n");
		}
	}
	
	return 0;
}
