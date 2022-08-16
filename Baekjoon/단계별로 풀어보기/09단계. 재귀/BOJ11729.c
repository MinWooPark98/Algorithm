#include <stdio.h>

void hanoi(int n, int start, int end);
int hanoi_count(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", hanoi_count(n));
	hanoi(n, 1, 3);
	return 0;
}

void hanoi(int n, int start, int end)
{
	if (n == 1)
	{
		printf("%d %d\n", start, end);
		return;
	}
	int end_1 = 6 - start - end;
	hanoi(n - 1, start, end_1);
	printf("%d %d\n", start, end);
	hanoi(n - 1, end_1, end);
	return;
}

int hanoi_count(int n)
{
	if (n == 1)
		return 1;
	return 2 * hanoi_count(n - 1) + 1;
}