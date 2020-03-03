#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *in="Hello World";
   func(in);
    return 0;
}
void func(char * input){
printf("%c",*input);
if(*(input+1)!='\0'){
    func(input+1);
}
else{
    printf("-");
}
printf("%c",*input);
}
