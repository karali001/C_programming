//STANDART GİRİŞ CIKIŞ FONKSIYONLARI 

/*
printf  ==== cıkıs fonskıyonudur 
printf("%f",x); seklınde bastırılır.

scanf = kullanıcdan aldırır ve bastırır.(giriş fonksıyonudur.)
scanf("%f" , &x); seklındedır.

sımdı kucuk bır kure hacmı hesaplama programı yazalım.
*/


#include<stdio.h>
#define x 3.14// pı degerını dırek olarak bıldırdım defıne komutu bır seyı dırek bıldırmek ıcın kullanılır

int main() {
	
	
	int yaricap;
	float hacim;
	// c programlamada sıra onemlıdır ama c++ sıra onemlı degıldır.
	// c++ ıse c nın yenı versıyonudur dıyebılırız.
	printf("Kürenin yariçapni giriniz:");
	scanf ("%d",&yaricap);
	//scanf kullanıcadan bılgı almaktır.
	hacim= (4/3.0)*x*(yaricap*yaricap*yaricap);
	printf("Kürenin yariçapı %.2f dır",hacim);
	
	
	
	return 0;
}
