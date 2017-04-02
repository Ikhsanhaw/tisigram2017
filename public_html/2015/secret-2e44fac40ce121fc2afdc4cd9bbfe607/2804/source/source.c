#include <stdio.h>
#include <stdbool.h>

int main() {
	int x,a,b,c,tmp,tmp1,i;
	bool found;
	scanf("%d%d%d%d",&x,&a,&b,&c);
	i=c;
	found=false;
	while (i<x&&!found) {
		if (i%a==0&&i%b==0) {
			tmp=i;
			found=true;
		}
		else i+=c;
	}
	if (found) {
		printf("%d ",tmp);
		found=false;
		i=tmp;
		while (!found) {
			if (i>tmp) {
				tmp1=i;
				found=true;
			}
			else i+=tmp;
		}
	}
	else {
		printf("1 ");
		while (!found) {
			if (i==x) i+=c;
			if (i%a==0&&i%b==0) {
				tmp1=i;
				found=true;
			}
			else i+=c;
		}
	}
	printf("%d\n",tmp1);
	return 0;
}
