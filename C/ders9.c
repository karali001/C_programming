// KOSULLU IFADELER(�F-EL�F-ELSE)
/*
  bool ver� t�pler�n� bu dersde k�saca b�r sek�lde anlatacag�m s�ze
  true(dogru)
  false(yanl�s)
  
  
  or (veya)
  0 0   <<<<<<<<==============>>>>>>>>>> 0 false(yanl�s)
  0 1   <<<<<<<<==============>>>>>>>>>> 1 true(dogru)
  1 0   <<<<<<<<==============>>>>>>>>>> 1 true(dogru)
  1 1   <<<<<<<<==============>>>>>>>>>> 1 true(dogru)

  and (ve )

  0 0   <<<<<<<<==============>>>>>>>>>> 0  false(yanl�s)
  0 1   <<<<<<<<==============>>>>>>>>>> 0  false(yanl�s)
  1 0   <<<<<<<<==============>>>>>>>>>> 0  false(yanl�s)
  1 1   <<<<<<<<==============>>>>>>>>>> 1  true(dogru)
     
     s�md� kodlama �le bunu k�saca goster�l�m ama kodlamada  �f-el�f-else kullan�alcakt�r �lerl�yen derslerde �se bunlar daha detayl� b�r sek�lde anlat�laakt�r
*/

#include<stdio.h>


int main(){
	
	
	int note;
	printf("Notunuzu g�r�n�z :");
    scanf("%d",&note);
    
    if (note >60){
    	
    	printf("Dersden gect�n�z.");
	}
	
	else {
		
		
		printf("Dersden kald�n�z.");
	}
	
	return 0;
}
