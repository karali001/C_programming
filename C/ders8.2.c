#include<stdio.h>// printf(c�k�s) ve scanf(giri�) fonks�yonlar�n cal�smas� �c�n yazd�k  
#include<math.h>// sqrt cal�smas� �c�n yazd�g�m�z kutuphaned�r.

// ax**2 + bx+ c g�b� b�r denklem�n kokler�n� bulma formulunu yapacag�z 

int main() {
	
	
	int a,b,c ;
	float x1,x2;
	float delta;
	
	printf("Denklemin a sini giriniz:");
	scanf("%d",&a);
	printf("Denklemin b sini giriniz:");
	scanf("%d",&b);
	printf("Denklemin c sini giriniz:");
	scanf("%d",&c);
	
	delta=(b*b)-4*a*c;
	x1= (-b -(sqrt(delta)))/2*a ;//sqrt kokunu al demekt�r ve bu komutun cal�smas� �c�n uste #include<math.h> kutuphanes�n� ekled�k.
	x2= (-b +(sqrt(delta)))/2*a ;
	printf("denklemin 1. k�k� %.2f d�r, denklemin ikinci k�k� %.2f d�r",x1,x2);
	
	
	return 0;
}
