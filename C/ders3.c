/*   AR�TMET�K ��LEMLER*/

/* 
x+y  =x ve y toplar
x-y  =x ve y c�kar�r
x*y  =x ve y carpar
x/y  =x ve y boler
x%y  =x nin y gore modunu al�r 
+x   =+ ile carpar
-x   =- ile carpar
*/


#include<stdio.h>/*printf komutunun cal�mas� �c�n yaz�lacakt�r*/

int main(){
	
	
	
	int a=1;
	int b=2;
	
	
	printf("%d\n", 12+9);
	printf("%.1f\n", 12.45-9.67);
	printf("%.5f\n", 12.39*7.85);
	printf("%.5f\n", 12.39/7.85);
	printf("%d\n", 12%9);
/*burda kullan�d�g�m�z %.5f ter�mler�n� b�r oncek� ders�m�zde anlatm�st�k burda anlamad�ysan�z b�r oncek� ders� ac�p kontrol edeb�l�rs�n�z */
  	printf("%d\n", -a);
	printf("%d\n", +a);
	
	return 0;/*b�t�rme komutudur*/
	
}
