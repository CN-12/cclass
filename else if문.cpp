#include <stdio.h>

main()
{
	int score;
	printf("과목의 점수를 입력하세요 : ");
	scanf("%d", &score);
	score /= 10; // 몫 
	switch(score)
	{
		case 10:
		case 9: printf("A\n");
		break;
		case 8: printf("B\n");
		break;
		case 7: printf("C\n");
		break;
		case 6: printf("D\n");
		break;
		default: printf("E\n");
	 } 
	
	
	
	
	
	
//	if(score >= 90)
//	{
//		printf("수\n");
//	} 
//	else if(score >= 80)
//	{
//		printf("우\n");
//	}
//	else if (score >= 70)
//	{
//		printf("미\n");
//	}
//	else if(score >= 60)
//	{
//		printf("양\n");
//	}
//	else
//	{
//		printf("가\n"); 
//	} 
}
