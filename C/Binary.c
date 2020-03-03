#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    int sayac=0;
    int dizi[100];
    scanf("%d",&k);
    for(int i=0;i<999;i++){
        if(k>0){
                dizi[i]=k%2;
            k=(int)(k/2);

        }
        if(k>0){
            sayac++;
        }


    }
    for(int i=sayac;i>=0;i--){
        printf("%d",dizi[i]);
    }
    return 0;
}
