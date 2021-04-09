#include <stdio.h>

main()
{
	float ball;
	printf("공이 나간 거리를 넣어주세요! : ");
	scanf("%f", &ball);
	if(ball>=50 && ball<=60)
	{
		printf("WIN");
	}
	else 
	{
		printf("LOSE");
	}
	
}
