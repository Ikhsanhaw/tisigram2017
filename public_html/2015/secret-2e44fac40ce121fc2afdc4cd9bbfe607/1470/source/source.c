#include <stdio.h>
#include <math.h>

int main() {
	
	int n, p;
	
	scanf("%d", &n);
    
    p = 0;
    
    while(1) {
        if( (unsigned int) pow(2, p) == (int) n ) {
            printf("TRUE\n");
            break;
        }else{
            if( (unsigned int) pow(2, p) < (int) n ) {
                p++;
            }else{
                printf("FALSE\n");
                break;
            }
        }
    }
	
	return 0;
}
