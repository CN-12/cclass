#include <stdio.h>

main()
{
	int a=2,b=3,c=4,d=5;
    a = ++a + ++a;
    printf("1번 : %d\n", a);
    a=2,b=3,c=4,d=5;
	b = ++ b - --c;
	printf("2번 : %d\n", b);
	a=2,b=3,c=4,d=5; 
	c = ++b / b++;
	printf("3번 : %d\n", c);
	a=2,b=3,c=4,d=5;
	d= 10 % c++;
	printf("4번 : %d\n", d);
	a=2,b=3,c=4,d=5;
	a = ++c + c++ + c++;
    printf("5번 : %d\n", a);
    a=2,b=3,c=4,d=5;
    b = 10 + ++a;
	printf("6번 : %d\n", b);
	a=2,b=3,c=4,d=5;
	c = 10 - --d;
	printf("7번 : %d\n", c);
	a=2,b=3,c=4,d=5;
	c= ++a * b++;
	printf("8번 : %d\n", c);
}
