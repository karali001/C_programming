#include<stdio.h>// printf(cýkýs) ve scanf(giriþ) fonksýyonlarýn calýsmasý ýcýn yazdýk  
#include<math.h>// sqrt calýsmasý ýcýn yazdýgýmýz kutuphanedýr.

// ax**2 + bx+ c gýbý býr denklemýn koklerýný bulma formulunu yapacagýz 

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
	x1= (-b -(sqrt(delta)))/2*a ;//sqrt kokunu al demektýr ve bu komutun calýsmasý ýcýn uste #include<math.h> kutuphanesýný ekledýk.
	x2= (-b +(sqrt(delta)))/2*a ;
	printf("denklemin 1. kökü %.2f dýr, denklemin ikinci kökü %.2f dýr",x1,x2);
	
	
	return 0;
}
