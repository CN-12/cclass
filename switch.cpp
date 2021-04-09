#include <stdio.h>

main()
{
	char a;
	scanf("%c", &a);
	switch(a)
	{
		case 'A' : printf("apple\n");
		break;
		case 'B' : printf("banana\n");
		break;
		case 'C' : printf("carrot\n");
		break;
		default : printf("I love Vegetable");
	}
}
