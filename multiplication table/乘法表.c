#include<stdio.h>
int main()
{
	int q = 0, w = 0;
	for (q = 1; q < 10; q++)
	{
		for (w = 1; w <= q; w++)
		{
			printf("%d*%d=%2d ", w, q, w * q);
		}
		printf("\n");
	}
	return 0;
}