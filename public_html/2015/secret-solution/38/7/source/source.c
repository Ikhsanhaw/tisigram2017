/*
- MAIN MUSIK -
Author 	: Arief Subagja
Date	: 28 March 2016
*/


#include<stdio.h>

int main(){
	int Ilow,Imid,Ihigh,Nlow,Nmid,Nhigh,X,total;
	
	scanf("%d",&Ilow); scanf("%d",&Nlow);
	scanf("%d",&Imid); scanf("%d",&Nmid);
	scanf("%d",&Ihigh); scanf("%d",&Nhigh);

	if ((Nlow <=0) || (Nmid <=0) || (Nhigh <=0))
	{
		total = 0;
	}
	else
	{
		
	/* MENGHITUNG TOTAL KETUKAN */
	total = Nlow;
	if(total < ((((Imid+Ilow)-1)+Nmid)-1))
	{
		total = (((Imid+Ilow)-1)+Nmid)-1;
	}
	if(total < ((((Ihigh+Imid)-1)+Nhigh)-1))
	{
		total = (((Ihigh+Imid)-1)+Nhigh)-1;
	}
	
	}
	printf("%d\n",total);

return 0;
}
