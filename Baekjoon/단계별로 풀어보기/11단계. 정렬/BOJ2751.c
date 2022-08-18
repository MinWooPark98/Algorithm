#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, num;
	int * a = (int *)malloc(sizeof(int) * 2000001);
	memset(a, 0, sizeof(int) * 2000001);
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &num);
		++a[num + 1000000];
	}
	for (int i = 0; i < 2000001; ++i)
	{
		if (a[i])
			printf("%d\n", i - 1000000);
	}
    free(a);
	return 0;
}
