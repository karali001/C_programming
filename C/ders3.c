/*   ARÝTMETÝK ÝÞLEMLER*/

/* 
x+y  =x ve y toplar
x-y  =x ve y cýkarýr
x*y  =x ve y carpar
x/y  =x ve y boler
x%y  =x nin y gore modunu alýr 
+x   =+ ile carpar
-x   =- ile carpar
*/


#include<stdio.h>/*printf komutunun calýmasý ýcýn yazýlacaktýr*/

int main(){
	
	
	
	int a=1;
	int b=2;
	
	
	printf("%d\n", 12+9);
	printf("%.1f\n", 12.45-9.67);
	printf("%.5f\n", 12.39*7.85);
	printf("%.5f\n", 12.39/7.85);
	printf("%d\n", 12%9);
/*burda kullanýdýgýmýz %.5f terýmlerýný býr onceký dersýmýzde anlatmýstýk burda anlamadýysanýz býr onceký dersý acýp kontrol edebýlýrsýnýz */
  	printf("%d\n", -a);
	printf("%d\n", +a);
	
	return 0;/*býtýrme komutudur*/
	
}
