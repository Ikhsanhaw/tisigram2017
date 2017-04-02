#include <stdio.h>
#include <string.h>
int main(){
	
	char tg[100];
	scanf("%s",&tg);
	char dd[10];
	int d;
	int m;
	int y;
	int i;
	int c=0;
	for(i=0;i<2;i++){
		dd[c]=tg[i];
		c++;
	}
	dd[c]='\0';
	d=atoi(dd);
	c=0;
	for(i=3;i<5;i++){
		dd[c]=tg[i];
		c++;
	}
	dd[c]='\0';
	m=atoi(dd);
	c=0;
	for(i=6;i<strlen(tg);i++){
		dd[c]=tg[i];
		c++;
	}
	dd[c]='\0';
	y=atoi(dd);
	//printf("%d %d %d",d,m,y);
	
	int a1,a2,a3;
	scanf("%d %d %d",&a1,&a2,&a3);
	int big;
	if(a1==a2&&a2==a3){
		big=a1;
	}else{
		if(a1<a2 && a2<a3){
			big=a3;
			int status=0;
			int counter=1;
			while(status==0){
				big=a3*counter;
				if(big%a1==0 && big%a2==0){
					status=1;
				}else{
					counter++;
				}
			}
		}else if(a1<a3 && a3<a2){
			big=a2;
			int status=0;
			int counter=1;
			while(status==0){
				big=a2*counter;
				if(big%a1==0 && big%a3==0){
					status=1;
				}else{
					counter++;
				}
			}
			
		}else if(a2<a1 && a1<a3){
			big=a3;
			int status=0;
			int counter=1;
			while(status==0){
				big=a3*counter;
				if(big%a1==0 && big%a2==0){
					status=1;
				}else{
					counter++;
				}
			}
			
		}else if(a2<a3 && a3<a1){
			big=a1;
			int status=0;
			int counter=1;
			while(status==0){
				big=a1*counter;
				if(big%a3==0 && big%a2==0){
					status=1;
				}else{
					counter++;
				}
			}
			
		}else if(a3<a2 && a2<a1){
			big=a1;
			int status=0;
			int counter=1;
			while(status==0){
				big=a1*counter;
				if(big%a3==0 && big%a2==0){
					status=1;
				}else{
					counter++;
				}
			}
			
		}else if(a3<a1 && a1<a2){
			big=a2;
			int status=0;
			int counter=1;
			while(status==0){
				big=a2*counter;
				if(big%a1==0 && big%a3==0){
					status=1;
				}else{
					counter++;
				}
			}
			
		}else{
			if(a1==a2){
				if(a2<a3){
					big=a3;
					int status=0;
					int counter=1;
					while(status==0){
						big=a3*counter;
						if(big%a1==0 && big%a2==0){
							status=1;
						}else{
							counter++;
						}
					}
				}else{
					big=a2;
					int status=0;
					int counter=1;
					while(status==0){
						big=a2*counter;
						if(big%a1==0 && big%a3==0){
							status=1;
						}else{
							counter++;
						}
					}
				}
			
			}else if(a2==a3){
				if(a2<a1){
					big=a1;
					int status=0;
					int counter=1;
					while(status==0){
						big=a1*counter;
						if(big%a3==0 && big%a2==0){
							status=1;
						}else{
							counter++;
						}
					}
				}else{
					big=a2;
					int status=0;
					int counter=1;
					while(status==0){
						big=a2*counter;
						if(big%a1==0 && big%a3==0){
							status=1;
						}else{
							counter++;
						}
					}
				}
			
			}else if(a1==a3){
				if(a3<a2){
					big=a2;
					int status=0;
					int counter=1;
					while(status==0){
						big=a2*counter;
						if(big%a1==0 && big%a3==0){
							status=1;
						}else{
							counter++;
						}
					}
				}else{
					big=a3;
					int status=0;
					int counter=1;
					while(status==0){
						big=a3*counter;
						if(big%a1==0 && big%a2==0){
							status=1;
						}else{
							counter++;
						}
					}
				}
				
			}
		}
	}
	d+=big;
	int batas;
	if((y%4==0 && y%100!=0)|| (y%400==0)){
		if(m==2){
			batas=29;
		}else{
			batas=30;
		}
		while(d-batas>0){
			d-=batas;
			m++;
			if(m%12==1){
				y++;
				m=m-12;
			}
			if((y%4==0 && y%100!=0)|| (y%400==0)){
				if(m==2){
					batas=29;
				}else{
					batas=30;
				}
			}else{
				if(m==2){
					batas=28;
				}else{
					batas=30;
				}
			}
		}
	}else{
		if(m==2){
			batas=28;
		}else{
			batas=30;
		}
		while(d-batas>0){
			d-=batas;
			m++;
			if(m%12==1){
				y++;
				m=m-12;
			}
			if((y%4==0 && y%100!=0)|| (y%400==0)){
				if(m==2){
					batas=29;
				}else{
					batas=30;
				}
			}else{
				if(m==2){
					batas=28;
				}else{
					batas=30;
				}
			}
		}
	}
	printf("%.2d/%.2d/%d\n",d,m,y);
	return 0;
}