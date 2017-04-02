#include<stdio.h>
int main()
{
	int Lx, Ly, Lr, Px, Py;
	scanf("%d", &Lx);
	scanf("%d", &Ly);
	scanf("%d", &Lr);
	scanf("%d", &Px);
	scanf("%d", &Py);
	
	if((Lr>Lx)&&(Lr>Ly))
	{
	if((Px>Lr) || (Py>Lr))
	{
		printf("di luar arena pertandingan");
	}
	if((Px<Lr) && (Py<Lr))
	{
		printf("di dalam arena pertandingan");
	}
	if((Px==Lr && Py<Lr) || (Py==Lr && Px<Lr))
	{
		printf("tepat pada batas arena pertandingan");
	}
	if((Px==Lx) && (Py==Ly))
	{
		printf("tepat pada titik tengah arena pertandingan");
 	}
	}
	
	if((Lr<Lx)&&(Lr<Ly))
	{
	if((Px<Lr) || (Py<Lr))
	{
		printf("di luar arena pertandingan");
	}
	if((Px>Lr) && (Py>Lr))
	{
		printf("di dalam arena pertandingan");
	}
	if((Px==Lr && Py>Lr) || (Py==Lr && Px>Lr))
	{
		printf("tepat pada batas arena pertandingan");
	}
	if((Px==Lx) && (Py==Ly))
	{
		printf("tepat pada titik tengah arena pertandingan");
 	}
	}
}
