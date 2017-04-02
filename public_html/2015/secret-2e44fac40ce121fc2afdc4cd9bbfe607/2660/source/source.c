#include <stdio.h>

int main(){
	int i,j,k;
	
	scanf("%d",&i);
	scanf("%d",&j);
	
	if(j%2==0)
		for(k=1;k<=i;k++)
			if(k%2==0)
				printf("%d\n",k);
		else if(j%2==1)
			for(k=1;k<=i;k++)
			if(k%2==1)
				printf("%d\n",k);
				
	return 0;
}
