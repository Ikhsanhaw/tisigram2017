/* Program  : vokal_MohamadPrastaPradipta.c
 * Deskripsi: menentukan huruf itu vokal atau bukan
 * Nama/NIM : Mohamad Prasta Pradipta/151524018
 * Tanggal/versi: 24-Maret-2016/V.1.0
 * Compiler: Dev-C++ 5.7.1
 */
 
 #include <stdio.h>
 
 int main()
 {
 	char huruf;
 	
 	scanf("%c",&huruf);
	 if(huruf=='a'||huruf=='A'||huruf=='i'||huruf=='I'||huruf=='u'||huruf=='U'||huruf=='E'||huruf=='e'||huruf=='o'||huruf=='O') 
	  	printf("True");
	  	else if (huruf !='a'||huruf !='A'||huruf !='i'||huruf !='I'||huruf !='u'||huruf !='U'||huruf !='E'||huruf !='e'||huruf !='o'||huruf !='O')
	   printf("Wrong");
 	
 	return 0;

 }
