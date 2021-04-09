#include <stdio.h>

main()
{
	int n, i, t, sum=0;
	printf("정수의 개수? : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d번째 정수? : ",i);
		scanf("%d", &t);
		sum=sum+t;
	 } 
	 printf("합: %d\n", sum);
	 printf("평균: %.0f\n",(float)sum/n);
	 return 0;
}
