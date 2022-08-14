#include <stdio.h>
#include <string.h>

void sizeEqualize(char* n1, char* n2);
void calculate(char* n1, char* n2, char* sum, int size);

int main()
{
	char n1[10001] = { 0, }, n2[10001] = { 0, };
	char sum[10002] = { 0, };
	scanf("%s %s", n1, n2);
	int size1 = strlen(n1);
	int size2 = strlen(n2);
	int size;
	if (size1 >= size2) size = size1;
	else size = size2;
	sizeEqualize(n1, n2);
	calculate(n1, n2, sum, size);
	printf("%s", sum);
}

void sizeEqualize(char* n1, char* n2)
{
	int size1 = strlen(n1);
	int size2 = strlen(n2);
	if (size1 < size2)
	{
		for (int i = size1 - 1; i >= 0; i--)
			n1[i + size2 - size1] = n1[i];
		for (int i = 0; i < size2 - size1; i++)
			n1[i] = 48;
	}
	else if (size2 < size1)
	{
		for (int i = size2 - 1; i >= 0; i--)
			n2[i + size1 - size2] = n2[i];
		for (int i = 0; i < size1 - size2; i++)
			n2[i] = 48;
	}
}

void calculate(char* n1, char* n2, char* sum, int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		sum[i] += n1[i] + n2[i] - 48;
		if (i == 0)
		{
			if (sum[0] > 57)
			{
				for (int j = size; j >= 0; j--)
				{
					sum[j + 1] = sum[j];	
				}
				sum[0] = 49;
				sum[1] -= 10;
			}
		}
		else if (sum[i] > 57)
		{
			sum[i - 1] = 1;
			sum[i] -= 10;
		}
	}
}