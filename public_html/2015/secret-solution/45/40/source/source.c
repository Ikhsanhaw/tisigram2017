#include <stdio.h>
#include <stdlib.h>

int main(){
int dalam, mampu;
int temp = 0;

scanf("%d %d",&mampu,&dalam);

if(mampu <= 0){
	printf("mustahil\n");
}
else{
	temp = temp +(dalam/mampu);
	temp = temp +(dalam%mampu);
	printf("%d\n",temp);
}

return 0;
}