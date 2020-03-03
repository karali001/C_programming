//VERÝ TÝPLERÝ,DEÐÝÞKNELER

//teklý yorum satýrýdýr(compiller) yaný calýstýr yapýnca ekrana basmaz
/*            
coklu yorum satýrýdýr býr onceký dersdede anlatýlmýstý.

/*


/*Þimdý gelelým degýskenlere 
Temel olarak býzým 6 tane degýskenýmýz vardýr bunlar sýrasýyla
char= 1 byte (8bit) -2**8 den 2**8 kadar deger alabýlýr her býr deger ASCII tablosundaký degerý býze basacaktýr. 
int= 4 byte(32bit) -2**16 den 2**16 kadar degerlerý alabýlýr (tamsayý demektýr ingilizce karsýlýgýdýr.) 
float=byte ýsletým sýstemýne gore degýsebýlýr.float adý uzerýne ondalýk sayýlarýn basýlmasýnda kullanýlýr.
double=byte ýsletým sýstemýne gore degýsebýlýr.double daha uzun ondalýklý sayýlarýn kullanýlmasýnda kullanýlýr.
short= (short int) yaný adý uzerýne kýsa anlamýna gelmektedýr 2 byte(16 bit) -2**8 den 2**8 kadar degerlerý basabýlýr.
long= (long int) yaný adý uzerýne uzun anlamýna gelmektedýr  8 byte(64bit) -2**32 den 2**32 kadar degerlerý basabýlýr.

Yazýlýmcýlar daha cok char,int,float ve double kullanýlacaktýr dýger ýký tanesý o kadar onemlý degýldýr ama býlmekte fayda vardýr

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



#include<stdio.h>
int main()   {
	
	int a=5;
	char b=66;
	char c='B';
	float d=4.21;
	double e=6.73263223633;
	
	
	printf("%d %c %9d\t %.1f %.2f %s\n" ,a,b,c,d,e,"ENES KARALÝ");
	/*burdaký d yaný int basýmýnda %(girmek istedigimiz sayý)d ýslemýnde ne kadar bosluk býrakmak ýstedýgýmýzdýr %.(girmek istedigimiz sayý)f ýslemý ýse výrgulden sonra kac basamak gýrmek 
	ýstedýgýmýzdýr*/
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	/*burda kullanýdýgýmýz %d neden kullandýgýnýz dýceksýnýz bunun sebebý byte býr tam sayý oldugundan yaný býr ýnt oldugundan bunu tanýmlarken %d kullanmak zorunda kalýyoruz.
	Ardýnda burda kullandýgýmýz sizeof ýle hangý degýskenýn kac byte oldugunu bulmak ýcýn kullanýrýz.*/
	return 0;
}
