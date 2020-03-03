#include <stdio.h>
#include <stdlib.h>
struct ogrenci{
int id;
int grade1;
int grade2;
int grade3;
};
void sort(char *param1,char *param2);
int main()
{
   char * inputFile="input.txt";
   char * outputFile="output.txt";

   sort(inputFile,outputFile);

    return 0;
}

void sort(char *param1,char *param2){
   FILE*final;
   struct ogrenci temp;
   int KayitSayisi=0,i,j;
   final=fopen(param1,"r");
   if(final==0){
    printf("Dosya acilamadi...");
    fclose(final);
   }
}
fscanf(final,"%d",&KayitSayisi);
struct ogrenci ogr[KayitSayisi];
for(i=0;i<KayitSayisi;i++){
    fscanf(final,"%d %d %d %d",&ogr[i].id,&ogr[i].grade1,&ogr[i].grade2,&ogr[i].grade3);

}
fclose(final);
for(i=0;i<KayitSirasi;i++){
    for(j=0;j<KayitSirasi;i++){
      if(ogr[j].id>ogr[j+1].id){
        temp=ogr[j];
        ogr[j]=ogr[j+1];
        ogr[j+1]=temp;
    }
}
}
final=fopen(param,"w");
for(i=0;i<KayitSayisi;i++){
    fscanf(final,"%d %d %d %d",&ogr[i].id,&ogr[i].grade1,&ogr[i].grade2,&ogr[i].grade3);

}
fclose(final);
