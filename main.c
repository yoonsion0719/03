#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char c;
	
	printf("enter a character : ");
	scanf("%c", &c);
	
	printf("the next character of %c (%i) is %c (%i)\n",c,c,c+1,c+1);
	
	
	return 0;
}
