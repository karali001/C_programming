//VER� T�PLER�,DE���KNELER

//tekl� yorum sat�r�d�r(compiller) yan� cal�st�r yap�nca ekrana basmaz
/*            
coklu yorum sat�r�d�r b�r oncek� dersdede anlat�lm�st�.

/*


/*�imd� gelel�m deg�skenlere 
Temel olarak b�z�m 6 tane deg�sken�m�z vard�r bunlar s�ras�yla
char= 1 byte (8bit) -2**8 den 2**8 kadar deger alab�l�r her b�r deger ASCII tablosundak� deger� b�ze basacakt�r. 
int= 4 byte(32bit) -2**16 den 2**16 kadar degerler� alab�l�r (tamsay� demekt�r ingilizce kars�l�g�d�r.) 
float=byte �slet�m s�stem�ne gore deg�seb�l�r.float ad� uzer�ne ondal�k say�lar�n bas�lmas�nda kullan�l�r.
double=byte �slet�m s�stem�ne gore deg�seb�l�r.double daha uzun ondal�kl� say�lar�n kullan�lmas�nda kullan�l�r.
short= (short int) yan� ad� uzer�ne k�sa anlam�na gelmekted�r 2 byte(16 bit) -2**8 den 2**8 kadar degerler� basab�l�r.
long= (long int) yan� ad� uzer�ne uzun anlam�na gelmekted�r  8 byte(64bit) -2**32 den 2**32 kadar degerler� basab�l�r.

Yaz�l�mc�lar daha cok char,int,float ve double kullan�lacakt�r d�ger �k� tanes� o kadar oneml� deg�ld�r ama b�lmekte fayda vard�r

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



#include<stdio.h>
int main()   {
	
	int a=5;
	char b=66;
	char c='B';
	float d=4.21;
	double e=6.73263223633;
	
	
	printf("%d %c %9d\t %.1f %.2f %s\n" ,a,b,c,d,e,"ENES KARAL�");
	/*burdak� d yan� int bas�m�nda %(girmek istedigimiz say�)d �slem�nde ne kadar bosluk b�rakmak �sted�g�m�zd�r %.(girmek istedigimiz say�)f �slem� �se v�rgulden sonra kac basamak g�rmek 
	�sted�g�m�zd�r*/
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	/*burda kullan�d�g�m�z %d neden kulland�g�n�z d�ceks�n�z bunun sebeb� byte b�r tam say� oldugundan yan� b�r �nt oldugundan bunu tan�mlarken %d kullanmak zorunda kal�yoruz.
	Ard�nda burda kulland�g�m�z sizeof �le hang� deg�sken�n kac byte oldugunu bulmak �c�n kullan�r�z.*/
	return 0;
}
