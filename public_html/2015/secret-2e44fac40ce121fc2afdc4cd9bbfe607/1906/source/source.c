 #include <stdio.h>
int main ()
{
	 int x,y,z,a,b,c;
	 scanf ("%d",&x);
	 scanf ("%d",&y);
	 scanf ("%d",&z);
	 if ((x!=0)&&(x>0))
	 {printf("%d\n",x);}
	 else
	 {printf("mustahil!\n");}
	 if ((y!=0)&&(y>0))
	 { a=x+y;
		printf("%d\n",a);
	 }
	 else
	 {printf("mustahil!\n");}
	 if (z>=0)
	 { b=x-z;
		if (b>0)
		{ printf("%d\n",b);}
		else {printf("mustahil!\n");}}
	 else
	 {printf("mustahil!\n");}
	 return 0;
}
