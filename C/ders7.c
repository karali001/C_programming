//STANDART GÝRÝÞ CIKIÞ FONKSIYONLARI 

/*
printf  ==== cýkýs fonskýyonudur 
printf("%f",x); seklýnde bastýrýlýr.

scanf = kullanýcdan aldýrýr ve bastýrýr.(giriþ fonksýyonudur.)
scanf("%f" , &x); seklýndedýr.

sýmdý kucuk býr kure hacmý hesaplama programý yazalým.
*/


#include<stdio.h>
#define x 3.14// pý degerýný dýrek olarak býldýrdým defýne komutu býr seyý dýrek býldýrmek ýcýn kullanýlýr

int main() {
	
	
	int yaricap;
	float hacim;
	// c programlamada sýra onemlýdýr ama c++ sýra onemlý degýldýr.
	// c++ ýse c nýn yený versýyonudur dýyebýlýrýz.
	printf("Kürenin yariçapni giriniz:");
	scanf ("%d",&yaricap);
	//scanf kullanýcadan býlgý almaktýr.
	hacim= (4/3.0)*x*(yaricap*yaricap*yaricap);
	printf("Kürenin yariçapý %.2f dýr",hacim);
	
	
	
	return 0;
}
