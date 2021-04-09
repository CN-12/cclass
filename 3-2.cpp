#include <stdio.h>
int main() {
	char input_value[50];
	scanf("%s", input_value);
	printf("%.4s", input_value); //4글자만 출력 
	printf("%3.2s", input_value); //전체를3자리 지정 2글자 출력 
}


