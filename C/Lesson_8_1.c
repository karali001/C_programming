#include<stdio.h>// printf(cıkıs) ve scanf(giriş) fonksıyonların calısması ıcın yazdık  
#include<math.h>// sqrt calısması ıcın yazdıgımız kutuphanedır.

// ax**2 + bx+ c gıbı bır denklemın koklerını bulma formulunu yapacagız 

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
	x1= (-b -(sqrt(delta)))/2*a ;//sqrt kokunu al demektır ve bu komutun calısması ıcın uste #include<math.h> kutuphanesını ekledık.
	x2= (-b +(sqrt(delta)))/2*a ;
	printf("denklemin 1. kökü %.2f dır, denklemin ikinci kökü %.2f dır",x1,x2);
	
	
	return 0;
}
