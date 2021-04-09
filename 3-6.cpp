#include <stdio.h>
int main()
{
	int i;
	char n[21];
	
	scanf("%s", &n);
	for(i=0;n[i]!='\0';i++) //'\0'가 아니면 for문을 계속 실행하세요  
	{
		printf("\'%c\'\n", n[i]); //i번째 문자열 출력 
	}
	return 0;
}
