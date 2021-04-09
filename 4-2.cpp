#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool b1 = false;
	bool b2 = true;
	if (b1) //b1이 참이면 
		printf("b1=참\n");
	else
		printf("b1=거짓\n");
	//만약에 b2가 거짓이면 거짓을 참이면 참을 출력하는 명령작성 
	if (!b2) //~b2
		printf("b2=거짓\n");
	else
		printf("b2=참\n");
	
		
	return 0;
}

