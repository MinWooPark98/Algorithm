#include <stdio.h>

int main()
{
	int N, M;
	int count, max = 64;
	char board[51][51] = { 0 };
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
			scanf(" %c", &board[i][j], (int)sizeof(char) * 50 * 50);
	}

	for (int i = 0; i < N - 7; ++i)
	{
		for (int j = 0; j < M - 7; ++j)
		{
			count = 0;
			for (int k = i; k < i + 8; ++k)
			{
				for (int l = j; l < j + 8; ++l)
				{
					if (((k % 2 != l % 2) && board[k][l] == 'W') || ((k % 2 == l % 2) && board[k][l] == 'B'))
						++count;
				}
			}
			if (count < max)
				max = count;
			count = 0;
			for (int k = i; k < i + 8; ++k)
			{
				for (int l = j; l < j + 8; ++l)
				{
					if (((k % 2 != l % 2) && board[k][l] == 'B') || ((k % 2 == l % 2) && board[k][l] == 'W'))
						++count;
				}
			}
			if (count < max)
				max = count;
		}
	}
	printf("%d", max);
}