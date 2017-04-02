
#include<stdio.h>

int CekPosisi(int a_x, int b_y, int radius, int h_x, int k_y )
{
	int posisi;
	int hasil;
	int Rkuadrat;
	
	hasil=((h_x-a_x)*(h_x-a_x)+(k_y-b_y)*(k_y-b_y));
	Rkuadrat=radius*radius;		
			
			if (h_x !=a_x || k_y!=b_y)
			{
				if (hasil < Rkuadrat)
				{
					posisi=1;
				}
				
				 if (hasil==Rkuadrat)
				{
					
					posisi=2;
				}
				
				if (hasil > Rkuadrat)
				{
					posisi=3;
				}
			}
			else
			{
				posisi=4;
			}	
				
	
return posisi;
}

void tampil(int posisi)
{
	switch (posisi)
	{
		case 1: 
				printf("di dalam arena pertandingan\n");
				break;
				
		case 2:
				printf("tepat pada batas arena pertandingan\n");
				break;
		
		case 3:
				printf("di luar arena pertandingan\n");
				break;
		case 4: 
				printf("tepat pada titik tengah arena pertandingan\n");
				break;
	}
}

int main ()
{
	typedef struct
	 {
        int x;
        int y;
	 } Point;
	
	Point TP;
	Point TL;
	int R;
	int Pos;
	
	scanf("%d %d", &TP.x, &TP.y);
	scanf("%d", &R);
	scanf("%d %d", &TL.x, &TL.y);
	
			
			Pos=CekPosisi(TP.x, TP.y, R, TL.x, TL.y );
			tampil(Pos);
return 0;
}
 
