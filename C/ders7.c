//STANDART G�R�� CIKI� FONKSIYONLARI 

/*
printf  ==== c�k�s fonsk�yonudur 
printf("%f",x); sekl�nde bast�r�l�r.

scanf = kullan�cdan ald�r�r ve bast�r�r.(giri� fonks�yonudur.)
scanf("%f" , &x); sekl�nded�r.

s�md� kucuk b�r kure hacm� hesaplama program� yazal�m.
*/


#include<stdio.h>
#define x 3.14// p� deger�n� d�rek olarak b�ld�rd�m def�ne komutu b�r sey� d�rek b�ld�rmek �c�n kullan�l�r

int main() {
	
	
	int yaricap;
	float hacim;
	// c programlamada s�ra oneml�d�r ama c++ s�ra oneml� deg�ld�r.
	// c++ �se c n�n yen� vers�yonudur d�yeb�l�r�z.
	printf("K�renin yari�apni giriniz:");
	scanf ("%d",&yaricap);
	//scanf kullan�cadan b�lg� almakt�r.
	hacim= (4/3.0)*x*(yaricap*yaricap*yaricap);
	printf("K�renin yari�ap� %.2f d�r",hacim);
	
	
	
	return 0;
}
