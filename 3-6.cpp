#include <stdio.h>
int main()
{
	int i;
	char n[21];
	
	scanf("%s", &n);
	for(i=0;n[i]!='\0';i++) //'\0'�� �ƴϸ� for���� ��� �����ϼ���  
	{
		printf("\'%c\'\n", n[i]); //i��° ���ڿ� ��� 
	}
	return 0;
}
