#include <stdio.h>
#include <stdlib.h>

int main(){
int dalam, mampu;
int temp = 0;

scanf("%d %d",&mampu,&dalam);

temp = temp +(dalam/mampu);
temp = temp +(dalam%mampu);

if(temp==0){
	printf("mustahil\n");
}
else{
	printf("%d\n",temp);
}

return 0;
}