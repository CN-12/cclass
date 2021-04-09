#include <stdio.h>

int main()
{
	int A = 0;
	scanf("%d", &A);
	A = A - 90;
	if (A>0)
	{
		printf("합격");
	}
	else
	{
		printf("불합격");
	}
}
