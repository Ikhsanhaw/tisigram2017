 #include <stdio.h>

int main()
{
typedef struct {
int x;
int y;
} Point;

int r=0;
Point P[1], T[1];

scanf("%d %d",&P[0].x,&P[0].y);
scanf("%d",&r);
scanf("%d %d",&T[0].x,&T[0].y);
if (T[0].x==P[0].x && T[0].y==P[0].y) 
{
	printf("tepat pada titik tengah arena pertandingan\n");
} 
else 
{
	if ((T[0].x==P[0].x+r && T[0].y<P[0].y+r && T[0].y>P[0].y-r) || (T[0].x<P[0].x+r && T[0].x>P[0].x-r && T[0].y==P[0].y+r)) 
		{
			printf("tepat pada batas arena pertandingan\n");
		}
	else 
	{
		if ((T[0].x==P[0].x-r && T[0].y<P[0].y+r && T[0].y>P[0].y-r) || (T[0].x<P[0].x+r && T[0].x>P[0].x-r && T[0].y==P[0].y-r)) 
			{
				printf("tepat pada batas arena pertandingan\n");
			} 
		else 
		{
			if ((T[0].x<P[0].x+r && T[0].y<P[0].y+r && T[0].y>P[0].y-r) || (T[0].x>P[0].x-r && T[0].y>P[0].y-r && T[0].y<P[0].y+r))  
			{
				printf("di dalam arena pertandingan\n");
			} 
			else 
			{
				printf("di luar arena pertandingan\n");
			}
		}
	}
}

}

