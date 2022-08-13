#include <stdio.h>

int main()
{
    int N, min, max;
    scanf("%d", &N);
    int a[N];
    for(int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            min = a[i];
            max = a[i];
        }
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("%d %d", min, max);
    return 0;
}