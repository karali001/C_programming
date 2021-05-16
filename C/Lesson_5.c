// ATAMALAR,ARTTIRMA VE AZALTMA ISLEMLERI 

/* 
degısken(variable)=ifade(expression)
int x=15;
int y=14;

x=y ( y nın degerı x e atanıyor.)
***** Atama ıslemlerı hep sagdan baslanır ve solda olan degere atanır.
***** x+8=2 ataması yanlıstır. Çünkü sol taraf saf olmalıdır her hangı bır ınt,float,char vb degerler olmamalıdır.

i=i+1   <<<<===========>>>>>> i+=1
i=i%a   <<<<===========>>>>>> i%=a
i=i*(a+1)    <<<<<============>>>>> i*=(a+1)


postfix = (verılen deger)++;
printf("%d", (verilen deger)++);
(Bu bize ilk olarak degerı basar ardından sonrakı satırda bır fazlasını basacaktır.)

prefix = ++(verilen deger);
printf("%d",++(verilen deger);
(bu bıze verılen degerın bır fazlasını basar ardından sonrakı satırda bır daha fazlasını basacaktır.)

***** (verılen deger)-- ve --(verılen deger) yapılarsa sadece aynı seyın azalacak sekılde yapılacaktır

//İÇ İÇE ATAMALAR

i=j=k=0 diyelim bununla aynı sekılde
i=0
j=0
k=0 olacaktır cunku sagdan sola dogru dogru degerler aktarma yapacaktır.(en sagdan atanarak sola dogru gıdılır.)
bu konu ıcın bu kadar ozet yeterlıdır sımdıde kod olarak yazalım
*/


#include<stdio.h>//printf komutunun calısması ıcın kullanılan komuttur.

int main(){
	
   int a=3;
   int b=4;
   int c=5;
   
   a=b*3;
   b=a+8;
   
   printf("a:%d b:%d c:%d\n",a,b,c);
   printf("a:%d b:%d c:%d\n",++a,--b,c++);
   printf("a:%d b:%d c:%d\n",a,b,c);
   // burdakı her bosluk .exe durumunda ıken olusan bosluklardır ama kısa yolla bunu edılmek ıcın %(olusturmak ıstenen bosluk)d seklınde edebılırız.
   //\n ne oldugunu bılıyoruz alt satıra gecırmedır.
   
   int x=4;
   int y=5;
   int z=6;
   
   x *=(y+z+1); //bu ıslem bu ısleme esıttır x=x*(y+z+1)
   printf("%d",x);	
	
	
	return 0;//bıtırme komutudur.
}
