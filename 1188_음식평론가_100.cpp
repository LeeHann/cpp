#include <stdio.h>

int main()
{
	int i, n, m, res, pos;
	scanf("%d %d", &n, &m);
	for (i=1; i<m; i++)
	{
		pos+=n;
		if(pos%m) res++;
	}
	printf("%d\n", res);
	return 0;
}
