#include <stdio.h>
int GCD(int u, int v)
{
	if(u==0) return v;
	return GCD(v%u, u);
	
}
main()
{
	int u, v;
	u=280; v=30;
	printf("GCD(%d,%d):", u, v);
	printf("%d\n",GCD(u,v));
}
