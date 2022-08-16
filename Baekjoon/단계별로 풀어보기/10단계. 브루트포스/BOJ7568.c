#include <stdio.h>

int main()
{
	int N;
	int grade[50];
	int x[50], y[50];
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
		grade[i] = 1;
	for (int i = 0; i < N; ++i)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (x[i] < x[j] && y[i] < y[j])
				++grade[i];
		}
	}
	for (int i = 0; i < N; ++i)
		printf("%d\n", grade[i]);
}