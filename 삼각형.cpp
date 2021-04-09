#include <stdio.h>

main()
{
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	if(A<B+C && B<A+C && C<A+B)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}


