#include<stdio.h>
#include<math.h>

int main (){
	int i, j, kasusuji, nmatkul, nilai[100], rata[10]; 

// input //

	scanf("%d ", &kasusuji);
	for (i=0; i<kasusuji;i++){
	
		scanf("%d", &nmatkul);
		rata[i] = 0;
		for(j=0; j<nmatkul; j++)
		{
			if(j==nmatkul-1)
			{
				scanf("%d/n", &nilai[j]);
				rata[i] = rata[i] + nilai[j];
			} else {
				scanf("%d ", &nilai[j]);
				rata[i] = rata[i] + nilai[j];
			}
		}
		
		rata[i] = rata[i] / nmatkul;
	}
	
	
// output //
	
	for (i=0; i<kasusuji; i++)
	{
		if(rata[i] < 60)
		{
			printf("anda harus remedial\n");
		} else {
			printf("lulus\n");
		}
	}
	
	return 0;
}
