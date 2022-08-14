#include <stdio.h>

int main()
{
    int M, N, sum = 0, min = 0;
    scanf("%d %d", &M, &N);
    for (int i = M; i <= N; i++)
    {
        if (i == 2)
        {
            sum += 2;
            min += 2;
        }
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
            if (j == i - 1)
            {
                sum += i;
                if (min == 0) min = i;
            }
        }
    }
    if (sum)
        printf("%d\n%d", sum, min);
    else
        printf("-1");
    return 0;
}