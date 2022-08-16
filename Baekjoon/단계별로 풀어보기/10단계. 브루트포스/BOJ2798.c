#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int n[100] = { 0 };
    int sum = 0, nearest = 0;
    for (int i = 0; i < N; ++i)
        scanf("%d", &n[i]);
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            for (int k = j + 1; k < N; ++k)
            {
                sum = n[i] + n[j] + n[k];
                if (sum <= M && sum > nearest)
                    nearest = sum;
            }
        }
    }
    printf("%d", nearest);
    return 0;
}