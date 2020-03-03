// TÜR DÖNÜÞÜMLERÝ

/* c programlamýnýn kendýsýnýn yaptýgý otamatýk býr donusum vardýr. bu donusumde farklý turde verýtýplerý olsa býle c programlama kendý basýna bunlarý bazý onculuk sýrasýna gore bellý 
býr verýtýpýne donusturur.Þimdý bu otamatýk donusumde olan sýrayý sýze yazacagým;


char      
 short    >>>>>          int       >>>>>             float      >>>>>>           double      >>>>>           long double
 **** Saga dogru gýdýldýkce öncelýk artacaktýr bunu soyle kýsaca tanýmlarsak ;
 int býr sayý ýle float býr sayýnýn toplamýný c býze float olarak yazacaktýr ýnt olarak yazmýcaktýr yaný bu gercek hayattada boyledýr ondalýk sayý ýle tam sayý 
 toplanýrsa ortaya býr ondalýk sayý olacaktýr.
 
 Birde manuel dönüþüm vardýr bunuda gostermek gerekýrse 
 
 
 printf(%d\n",(int)3.2); 
 goruldugu gýbý býr sayýnýn manuel olarak degýstýrmek ýstenen verýtýpý yazýlýr ve baský halýnde yaný prýntf kýsmýnda bu sekýlde gosterýrýz.
 Þimdi kodlama ýle bunu sýze gosterecegým.
 */
 
 
 
 
 #include<stdio.h>
 
 int main(){
 	
 	
 	int x =2;
 	float y= 3.2;
 	
 	
 	printf("%.100f\n",x/y);
 	// bu yapýlan ýslem otamatýk donusumdur. 
 	printf("%d\n",(int)3.2);
 	printf("%f\n",(float)3);
 	//Bu yapýlan ýslemler manuel donusumdur.Istedýgýmýz verýtýpýne donusturebýlýrýz.
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }
