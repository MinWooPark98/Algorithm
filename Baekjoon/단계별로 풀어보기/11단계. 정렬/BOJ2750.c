#include <stdio.h>

int main()
{
	int N, num;
	int a[2001] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &num);
		++a[num + 1000];
	}
	for (int i = 0; i < 2001; ++i)
	{
		if (a[i])
			printf("%d\n", i - 1000);
	}
}