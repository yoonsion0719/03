#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float a;
	float b;
	
	printf("분자를 입력하세요 : ");
	scanf("%f",&a);
	
	printf("분모를 입력하세요 : ");
	scanf("%f",&b);
	
	
	printf("나누기의 결과는 %f 입니다.", a/b); 
	
	
	return 0;
}
