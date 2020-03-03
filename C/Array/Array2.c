#include<stdio.h>
#include<ctype.h>


void towLower(char*);

int main() {

	char a[] = "EXAMPLE";
	towLower(a);
	
	return 0;
}
void towLower(char *a) {
	
	for (; *a != '\0'; *a++) {
		if ((*a)) {
			*a=towlower(*a);
			printf("%c", *a);
		
		}
	/*printf("%c", *a);*/
	}
}