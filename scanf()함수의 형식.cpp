#include <stdio.h>
main()
{
	char name[21];
	int age;
	char code;
	double secure;
	printf("�̸��� �Է��ϼ��� :");
	scanf("%s", name);
	printf("���̸� �Է��ϼ��� :");
	scanf("%d", &age);
	printf("�μ��ڵ带 �Է��ϼ��� :");
	scanf("%c", &code);
	printf("����Ű�� �Է��ϼ��� :");
	scanf("%d", &secure); 
	printf("******************************\n");
	printf("�̸�:%c\n", name);
	printf("����:%d\n", age);
	printf("�μ��ڵ�:%c\n", code);
	printf("����Ű:%d\n", secure);
	printf("******************************\n");
	
	
	 
}
