#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int i = 1, count_666 = 0;
	while(1)
	{
		int count = 0;
		int temp = i;
		while (temp > 0)
		{
			if (temp % 10 == 6)
				++count;
			else
				count = 0;
			if (count == 3)
			{
				++count_666;
				break;
			}
			temp /= 10;
		}
		if (count_666 == N)
			break;
		++i;
	}
	printf("%d", i);
}