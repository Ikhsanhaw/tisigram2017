#include <stdio.h>

int main(){
	int Lr,Lx,Ly,Px,Py;
	scanf("%d %d",&Lx,&Ly);
	scanf("%d",&Lr);
	scanf("%d %d",&Px,&Py);

	int dx = Lx-Px;
	int dy = Ly-Py;
	int euclid = dx*dx + dy*dy;

	if (euclid == 0)
		printf("tepat pada titik tengah arena pertandingan\n");
	else if (euclid < Lr*Lr)
		printf("di dalam arena pertandingan\n");
	else if (euclid == Lr*Lr)
		printf("tepat pada batas arena pertandingan\n");
	else
		printf("di luar arena pertandingan\n");

	return 0;
}
