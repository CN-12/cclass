#include <stdio.h>

main()
{
	int score;
	printf("������ ������ �Է��ϼ��� : ");
	scanf("%d", &score);
	score /= 10; // �� 
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
//		printf("��\n");
//	} 
//	else if(score >= 80)
//	{
//		printf("��\n");
//	}
//	else if (score >= 70)
//	{
//		printf("��\n");
//	}
//	else if(score >= 60)
//	{
//		printf("��\n");
//	}
//	else
//	{
//		printf("��\n"); 
//	} 
}
