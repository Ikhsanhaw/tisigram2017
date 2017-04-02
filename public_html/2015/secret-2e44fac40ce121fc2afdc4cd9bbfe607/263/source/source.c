#include <stdio.h>
//#include <string.h>

int main(){
		long long int x1,x2,y1,y2,jarak;
		scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
		jarak=abs(x1-x2)+abs(y1-y2);
		printf("%lld\n",jarak);
		
	return 0;
}
