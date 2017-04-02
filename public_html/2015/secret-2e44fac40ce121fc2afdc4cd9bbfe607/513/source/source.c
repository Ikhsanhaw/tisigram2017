#include<stdio.h>

int data[255];
int n;
int Angka_Terbesar;

void Input()
	{
		scanf("%d",&n);
		int i = 0;
		while(i < n)
			{
				int k=i+1;
				scanf("%d",&data[i]);
				i++;
			}
	}

void Cek_Nilai()
	{
		int i = 0;
		
		while(i<n)
			{
				if(data[i]>Angka_Terbesar)
					{
						Angka_Terbesar = data[i];
					}
				i++;
			}
	}

int main()
	{
		Input();
		Cek_Nilai();
		printf("%d\n",Angka_Terbesar);
	}
