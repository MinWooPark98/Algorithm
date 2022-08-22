#include <stdio.h>

int main()
{
    int N, k, x;
    int score[10001] = {0};
    int cutline = 0;
    scanf("%d %d", &N, &k);
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &x);
        ++score[x];
    }
    for (int i = 10000; k > 0; --i)
    {
        if (score[i])
            k -= score[i];
        cutline = i;
    }
    printf("%d", cutline);
    return 0;
}