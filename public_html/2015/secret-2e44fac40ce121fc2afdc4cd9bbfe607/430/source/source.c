#include <stdio.h>
#include <math.h>
int main(){
	int x1,x2,y1,y2;
	int jarak;
	scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);
	jarak=(x1-x2)+(y1-y2);
	if(jarak<0){
		jarak=-1*jarak;
		printf("%d\n",jarak);
	}else{	
	printf("%d\n", jarak);
	}
	return 0;
}
