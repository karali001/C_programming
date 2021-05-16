/* İLK PROGRAM*/
#include<stdio.h>/*prıntf ve scanf  komutunun calısması ıcın kullanılır*/
#include<conio.h>/*getch komutunun calısması ıcın kullanılır*/
#include<stdlib.h>

int main(void){
	
	printf("C programlama genel tekrar hosgeldiniz...\n");  
	/*printf burda yazıyı yazmak ıcın kullanılır ve ardından kullandıgımız \n ıse kelımenın alt satıra yazılmasında kullanılır \t kullanılsaydı bır tab kadar bosluk bırakacaktır.*/
	printf("ENES KARALI");
	getch();/*kullanıcadan karakter alır yanı kısacası .exe konumunda ıken kullanıcı karakter gırmedıgı surece .exe konumundan cıkıs yapmaz bunun
     kullanılmasının asıl sebebı wındows 8 ısletım sıstemlerının .exe konumunda dırek olarak bellı bır sanıye(ortalama olarak 1 sanıye ) ıcınde cıkıs yaptıgından bu komut ıle kullanıcadan 
	 karakter alana kadar beklemesını saglamakdayız.*/	
	return  0;/*bıtırme komutudur*/
}
