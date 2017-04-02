 
 #include<stdio.h>
 
 typedef struct 
 {
 	int data;
 	int kandidat;
 } pemilu;

void Input (int baris, int kolom, pemilu Suara[baris][kolom])
{
	int i,j;
	
		for(i=1; i<=baris; i++)
		{
			for(j=1; j<=kolom; j++)
			{	
				scanf("%d", &Suara[i][j].data);
			}
		}	
 } 
 
void Inisial (int bar, int kol, pemilu Suara[bar][kol] )
{
	
		int i,j;
	
		for(i=1; i<=bar; i++)
		{
			for(j=1; j<=kol; j++)
			{	
				 Suara[i][j].kandidat=j;
			}
		}	
}
 
void CountSuara ( int baris, int kolom, int TestCase[], int testke, pemilu Suara[baris][kolom])
{
	int i,j,temp[kolom],max;
	
	for(i=1; i<=kolom; i++)
	{
		temp[i]=0;
		
		for(j=1; j<=baris; j++)
		{
			if (Suara[j][i].kandidat==i)
			{
				temp[i]=temp[i]+Suara[j][i].data;
			}
		}
	}
	
			max=1;
			for(i=2; i<=kolom; i++)
			{
				if(temp[i]>temp[max])
				{
					max=i;
				}
			}	
			
					
			
	TestCase[testke]=max;		
}


int main ()
{
	int Tcase, Tc;
	int i,j;
	pemilu TotSuara[100][100];
	int baris, kolom;
	
	
	scanf("%d", &Tcase);
	int TestCase[Tcase];
	
	for(Tc=1; Tc<=Tcase; Tc++)
	{	
		scanf("%d %d", &kolom, &baris);
		Input(baris,kolom,TotSuara);
		Inisial( baris, kolom,TotSuara);
		CountSuara(baris,kolom,TestCase,Tc,TotSuara);
	}
	
	for(i=1; i<=Tcase; i++)
	{
		
		printf("%d\n", TestCase[i]);
	}
	
return 0;	
}
