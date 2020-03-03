#include <stdio.h>
#include <stdlib.h>
void dizisirala(long int array[]);
void anan(long int *element1 , long int *element2);
int main()
{
     long int dizi[5]={625,563,53,96,2};
    dizisirala(dizi);
    for(int i=0;i<5;i++){
        printf("%10d",dizi[i]);
    }
    return 0;
}
void dizisirala(long int array[])
{
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(array[j]>array[j+1]){
           anan(&array[j],&array[j+1]);
            }
        }
    }
}
void anan(long int *element1,long  int *element2)
{

    int temp=*element1;
    *element1=*element2;
    *element2=temp;
}
