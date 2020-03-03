#include <stdio.h>
#include <stdlib.h>
void bubblesort(int * );
void bubblesorttwo(int *,int *);
int main()
{
    int i;
    int dizi[10]={1,50,2,4,8,76,9,4,52,43};
    printf("Dizinin siralanmamis hali\n");
    for(i=0;i<10;i++){
        printf("%3d",dizi[i]);
        if((i+1)%5==0){
           printf("\n");
        }
    }
    bubblesort(&dizi);
    printf("Dizinin sirali hali\n");
     for(i=0;i<10;i++){
        printf("%3d",dizi[i]);
        if((i+1)%5==0){
           printf("\n");
        }
    }

    return 0;
}
void bubblesort(int *diziPtr){
  int j,k;
  for(j=1;j<=10;j++){
    for(k=0;k<10;k++){
        if(diziPtr[k]>diziPtr[k+1]){
            bubblesorttwo(&diziPtr[k],&diziPtr[k+1]);
        }
    }
  }
}
void bubblesorttwo(int *eleman1Ptr , int *eleman2Ptr)
{
  int item=*eleman1Ptr;
 *eleman1Ptr=*eleman2Ptr;
 *eleman2Ptr=item;
}
