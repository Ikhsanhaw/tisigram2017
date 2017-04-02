#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * @auth 	: Muhamad Ismail
 * @date	: April 3, 2016
 * @desc 	: Program untuk menghitung jumlah angka nol berurutan 
 *			  yang mengakhiri suatu bilangan.
 */

int main() {
	
	int t, i, zero;
	
	scanf("%d", &t);
	
	int m[t];
    
	for(i = 0; i < t; i++) {
		scanf("%d", &m[i]);
        
        zero = 0;
		
		while(m[i]) {
			if( (m[i] % 10) == 0 ) {
				zero++;
				m[i] = m[i] / 10;
			}else{
                break;
			}
		}
		
		printf("%d\n", zero);
	}
    
	return 0;
}
