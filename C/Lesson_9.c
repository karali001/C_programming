// KOSULLU IFADELER(İF-ELİF-ELSE)
/*
  bool verı tıplerını bu dersde kısaca bır sekılde anlatacagım sıze
  true(dogru)
  false(yanlıs)
  
  
  or (veya)
  0 0   <<<<<<<<==============>>>>>>>>>> 0 false(yanlıs)
  0 1   <<<<<<<<==============>>>>>>>>>> 1 true(dogru)
  1 0   <<<<<<<<==============>>>>>>>>>> 1 true(dogru)
  1 1   <<<<<<<<==============>>>>>>>>>> 1 true(dogru)

  and (ve )

  0 0   <<<<<<<<==============>>>>>>>>>> 0  false(yanlıs)
  0 1   <<<<<<<<==============>>>>>>>>>> 0  false(yanlıs)
  1 0   <<<<<<<<==============>>>>>>>>>> 0  false(yanlıs)
  1 1   <<<<<<<<==============>>>>>>>>>> 1  true(dogru)
     
     sımdı kodlama ıle bunu kısaca gosterılım ama kodlamada  ıf-elıf-else kullanıalcaktır ılerlıyen derslerde ıse bunlar daha detaylı bır sekılde anlatılaaktır
*/

#include<stdio.h>


int main(){
	
	
	int note;
    printf("Notunuzu gİrİnİz :");
    scanf("%d",&note);
    
    if (note >60){
    	
    	printf("Dersden gectİnİz.");
	}
	
	else {
		
		
		printf("Dersden kaldİnİz.");
	}
	
	return 0;
}
