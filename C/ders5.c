// ATAMALAR,ARTTIRMA VE AZALTMA ISLEMLERI 

/* 
deg�sken(variable)=ifade(expression)
int x=15;
int y=14;

x=y ( y n�n deger� x e atan�yor.)
***** Atama �slemler� hep sagdan baslan�r ve solda olan degere atan�r.
***** x+8=2 atamas� yanl�st�r. ��nk� sol taraf saf olmal�d�r her hang� b�r �nt,float,char vb degerler olmamal�d�r.

i=i+1   <<<<===========>>>>>> i+=1
i=i%a   <<<<===========>>>>>> i%=a
i=i*(a+1)    <<<<<============>>>>> i*=(a+1)


postfix = (ver�len deger)++;
printf("%d", (verilen deger)++);
(Bu bize ilk olarak deger� basar ard�ndan sonrak� sat�rda b�r fazlas�n� basacakt�r.)

prefix = ++(verilen deger);
printf("%d",++(verilen deger);
(bu b�ze ver�len deger�n b�r fazlas�n� basar ard�ndan sonrak� sat�rda b�r daha fazlas�n� basacakt�r.)

***** (ver�len deger)-- ve --(ver�len deger) yap�larsa sadece ayn� sey�n azalacak sek�lde yap�lacakt�r

//�� ��E ATAMALAR

i=j=k=0 diyelim bununla ayn� sek�lde
i=0
j=0
k=0 olacakt�r cunku sagdan sola dogru dogru degerler aktarma yapacakt�r.(en sagdan atanarak sola dogru g�d�l�r.)
bu konu �c�n bu kadar ozet yeterl�d�r s�md�de kod olarak yazal�m
*/


#include<stdio.h>//printf komutunun cal�smas� �c�n kullan�lan komuttur.

int main(){
	
   int a=3;
   int b=4;
   int c=5;
   
   a=b*3;
   b=a+8;
   
   printf("a:%d b:%d c:%d\n",a,b,c);
   printf("a:%d b:%d c:%d\n",++a,--b,c++);
   printf("a:%d b:%d c:%d\n",a,b,c);
   // burdak� her bosluk .exe durumunda �ken olusan bosluklard�r ama k�sa yolla bunu ed�lmek �c�n %(olusturmak �stenen bosluk)d sekl�nde edeb�l�r�z.
   //\n ne oldugunu b�l�yoruz alt sat�ra gec�rmed�r.
   
   int x=4;
   int y=5;
   int z=6;
   
   x *=(y+z+1); //bu �slem bu �sleme es�tt�r x=x*(y+z+1)
   printf("%d",x);	
	
	
	return 0;//b�t�rme komutudur.
}
