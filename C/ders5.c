// ATAMALAR,ARTTIRMA VE AZALTMA ISLEMLERI 

/* 
degýsken(variable)=ifade(expression)
int x=15;
int y=14;

x=y ( y nýn degerý x e atanýyor.)
***** Atama ýslemlerý hep sagdan baslanýr ve solda olan degere atanýr.
***** x+8=2 atamasý yanlýstýr. Çünkü sol taraf saf olmalýdýr her hangý býr ýnt,float,char vb degerler olmamalýdýr.

i=i+1   <<<<===========>>>>>> i+=1
i=i%a   <<<<===========>>>>>> i%=a
i=i*(a+1)    <<<<<============>>>>> i*=(a+1)


postfix = (verýlen deger)++;
printf("%d", (verilen deger)++);
(Bu bize ilk olarak degerý basar ardýndan sonraký satýrda býr fazlasýný basacaktýr.)

prefix = ++(verilen deger);
printf("%d",++(verilen deger);
(bu býze verýlen degerýn býr fazlasýný basar ardýndan sonraký satýrda býr daha fazlasýný basacaktýr.)

***** (verýlen deger)-- ve --(verýlen deger) yapýlarsa sadece ayný seyýn azalacak sekýlde yapýlacaktýr

//ÝÇ ÝÇE ATAMALAR

i=j=k=0 diyelim bununla ayný sekýlde
i=0
j=0
k=0 olacaktýr cunku sagdan sola dogru dogru degerler aktarma yapacaktýr.(en sagdan atanarak sola dogru gýdýlýr.)
bu konu ýcýn bu kadar ozet yeterlýdýr sýmdýde kod olarak yazalým
*/


#include<stdio.h>//printf komutunun calýsmasý ýcýn kullanýlan komuttur.

int main(){
	
   int a=3;
   int b=4;
   int c=5;
   
   a=b*3;
   b=a+8;
   
   printf("a:%d b:%d c:%d\n",a,b,c);
   printf("a:%d b:%d c:%d\n",++a,--b,c++);
   printf("a:%d b:%d c:%d\n",a,b,c);
   // burdaký her bosluk .exe durumunda ýken olusan bosluklardýr ama kýsa yolla bunu edýlmek ýcýn %(olusturmak ýstenen bosluk)d seklýnde edebýlýrýz.
   //\n ne oldugunu býlýyoruz alt satýra gecýrmedýr.
   
   int x=4;
   int y=5;
   int z=6;
   
   x *=(y+z+1); //bu ýslem bu ýsleme esýttýr x=x*(y+z+1)
   printf("%d",x);	
	
	
	return 0;//býtýrme komutudur.
}
