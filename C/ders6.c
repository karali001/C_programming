// T�R D�N���MLER�

/* c programlam�n�n kend�s�n�n yapt�g� otamat�k b�r donusum vard�r. bu donusumde farkl� turde ver�t�pler� olsa b�le c programlama kend� bas�na bunlar� baz� onculuk s�ras�na gore bell� 
b�r ver�t�p�ne donusturur.�imd� bu otamat�k donusumde olan s�ray� s�ze yazacag�m;


char      
 short    >>>>>          int       >>>>>             float      >>>>>>           double      >>>>>           long double
 **** Saga dogru g�d�ld�kce �ncel�k artacakt�r bunu soyle k�saca tan�mlarsak ;
 int b�r say� �le float b�r say�n�n toplam�n� c b�ze float olarak yazacakt�r �nt olarak yazm�cakt�r yan� bu gercek hayattada boyled�r ondal�k say� �le tam say� 
 toplan�rsa ortaya b�r ondal�k say� olacakt�r.
 
 Birde manuel d�n���m vard�r bunuda gostermek gerek�rse 
 
 
 printf(%d\n",(int)3.2); 
 goruldugu g�b� b�r say�n�n manuel olarak deg�st�rmek �stenen ver�t�p� yaz�l�r ve bask� hal�nde yan� pr�ntf k�sm�nda bu sek�lde goster�r�z.
 �imdi kodlama �le bunu s�ze gostereceg�m.
 */
 
 
 
 
 #include<stdio.h>
 
 int main(){
 	
 	
 	int x =2;
 	float y= 3.2;
 	
 	
 	printf("%.100f\n",x/y);
 	// bu yap�lan �slem otamat�k donusumdur. 
 	printf("%d\n",(int)3.2);
 	printf("%f\n",(float)3);
 	//Bu yap�lan �slemler manuel donusumdur.Isted�g�m�z ver�t�p�ne donustureb�l�r�z.
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }
