#include<stdio.h>

int main(int argc, char *argv[]) {

printf( "bir sayi giriniz:" );
int sayi;
scanf("%d",&sayi);
if(sayi%5==0)
printf("girilen sayi olan sayi5 e tam bölünür" );
else
printf("girilen  sayi 5 e tam bolunemez ?? " );

return 0;
}
