#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Blank(int n, int temp, int** star);

int main()
{
	int N, temp;
	scanf("%d", &N);
	temp = N;
	int** star;
	star = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; ++i)
	{
		star[i] = (int*)malloc(sizeof(int) * N);
		memset(star[i], -1, sizeof(int) * N);
	}
	Blank(N, temp, star);
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (star[i][j] == -1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < N; ++i)
		free(star[i]);
	free(star);
	return 0;
}

void Blank(int n, int temp, int ** star)
{
	if (n == 1) return;
	for (int i = 0; i < temp; i += n)
	{
		for (int j = i + n / 3; j < i + n / 3 * 2; ++j)
		{
			for (int k = 0; k < temp; k += n)
			{
				for (int l = k + n / 3; l < k + n / 3 * 2; ++l)
					++star[j][l];
			}
		}
	}
	Blank(n / 3, temp, star);
}