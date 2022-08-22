#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, num;
    scanf("%d", &N);
    int n[10001] = { 0 };
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &num);
        ++n[num];
    }
    for (int i = 1; i < 10001; ++i)
    {
        for (int j = 0; j < n[i]; ++j)
            printf("%d\n", i);
    }
    return 0;
}