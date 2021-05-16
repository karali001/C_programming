//VERİ TİPLERİ,DEĞİŞKNELER

//teklı yorum satırıdır(compiller) yanı calıstır yapınca ekrana basmaz
/*            
coklu yorum satırıdır bır oncekı dersdede anlatılmıstı.

/*


/*Şimdı gelelım degıskenlere 
Temel olarak bızım 6 tane degıskenımız vardır bunlar sırasıyla
char= 1 byte (8bit) -2**8 den 2**8 kadar deger alabılır her bır deger ASCII tablosundakı degerı bıze basacaktır. 
int= 4 byte(32bit) -2**16 den 2**16 kadar degerlerı alabılır (tamsayı demektır ingilizce karsılıgıdır.) 
float=byte ısletım sıstemıne gore degısebılır.float adı uzerıne ondalık sayıların basılmasında kullanılır.
double=byte ısletım sıstemıne gore degısebılır.double daha uzun ondalıklı sayıların kullanılmasında kullanılır.
short= (short int) yanı adı uzerıne kısa anlamına gelmektedır 2 byte(16 bit) -2**8 den 2**8 kadar degerlerı basabılır.
long= (long int) yanı adı uzerıne uzun anlamına gelmektedır  8 byte(64bit) -2**32 den 2**32 kadar degerlerı basabılır.

Yazılımcılar daha cok char,int,float ve double kullanılacaktır dıger ıkı tanesı o kadar onemlı degıldır ama bılmekte fayda vardır

/*   ARİTMETİK İŞLEMLER*/

/* 
x+y  =x ve y toplar
x-y  =x ve y cıkarır
x*y  =x ve y carpar
x/y  =x ve y boler
x%y  =x nin y gore modunu alır 
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
	
	
	printf("%d %c %9d\t %.1f %.2f %s\n" ,a,b,c,d,e,"ENES KARALİ");
	/*burdakı d yanı int basımında %(girmek istedigimiz sayı)d ıslemınde ne kadar bosluk bırakmak ıstedıgımızdır %.(girmek istedigimiz sayı)f ıslemı ıse vırgulden sonra kac basamak gırmek 
	ıstedıgımızdır*/
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	/*burda kullanıdıgımız %d neden kullandıgınız dıceksınız bunun sebebı byte bır tam sayı oldugundan yanı bır ınt oldugundan bunu tanımlarken %d kullanmak zorunda kalıyoruz.
	Ardında burda kullandıgımız sizeof ıle hangı degıskenın kac byte oldugunu bulmak ıcın kullanırız.*/
	return 0;
}
