// TÜR DÖNÜŞÜMLERİ

/* c programlamının kendısının yaptıgı otamatık bır donusum vardır. bu donusumde farklı turde verıtıplerı olsa bıle c programlama kendı basına bunları bazı onculuk sırasına gore bellı 
bır verıtıpıne donusturur.Şimdı bu otamatık donusumde olan sırayı sıze yazacagım;


char      
 short    >>>>>          int       >>>>>             float      >>>>>>           double      >>>>>           long double
 **** Saga dogru gıdıldıkce öncelık artacaktır bunu soyle kısaca tanımlarsak ;
 int bır sayı ıle float bır sayının toplamını c bıze float olarak yazacaktır ınt olarak yazmıcaktır yanı bu gercek hayattada boyledır ondalık sayı ıle tam sayı 
 toplanırsa ortaya bır ondalık sayı olacaktır.
 
 Birde manuel dönüşüm vardır bunuda gostermek gerekırse 
 
 
 printf(%d\n",(int)3.2); 
 goruldugu gıbı bır sayının manuel olarak degıstırmek ıstenen verıtıpı yazılır ve baskı halınde yanı prıntf kısmında bu sekılde gosterırız.
 Şimdi kodlama ıle bunu sıze gosterecegım.
 */
 
 
 
 
 #include<stdio.h>
 
 int main(){
 	
 	
 	int x =2;
 	float y= 3.2;
 	
 	
 	printf("%.100f\n",x/y);
 	// bu yapılan ıslem otamatık donusumdur. 
 	printf("%d\n",(int)3.2);
 	printf("%f\n",(float)3);
 	//Bu yapılan ıslemler manuel donusumdur.Istedıgımız verıtıpıne donusturebılırız.
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }
