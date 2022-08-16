#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N / 3 + 1; i++)
    {
        if ((N - i * 3) % 5 == 0)
        {
            printf("%d", (N - i * 3) / 5 + i);
            break;
        }
        if (i == N / 3)
        {
            if (N % 3 == 0)
            {
                printf("%d", N / 3);
                break;
            }
            else
            {
                printf("-1");
                break;
            }
        }
    }
    return 0;
}