/*   ARİTMETİK İŞLEMLER*/

/* 
x+y  =x ve y toplar
x-y  =x ve y cıkarır
x*y  =x ve y carpar
x/y  =x ve y boler
x%y  =x nin y gore modunu alır 
+x   =+ ile carpar
-x   =- ile carpar
*/


#include<stdio.h>/*printf komutunun calıması ıcın yazılacaktır*/

int main(){
	
	
	
	int a=1;
	int b=2;
	
	
	printf("%d\n", 12+9);
	printf("%.1f\n", 12.45-9.67);
	printf("%.5f\n", 12.39*7.85);
	printf("%.5f\n", 12.39/7.85);
	printf("%d\n", 12%9);
/*burda kullanıdıgımız %.5f terımlerını bır oncekı dersımızde anlatmıstık burda anlamadıysanız bır oncekı dersı acıp kontrol edebılırsınız */
  	printf("%d\n", -a);
	printf("%d\n", +a);
	
	return 0;/*bıtırme komutudur*/
	
}
