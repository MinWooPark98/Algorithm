#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char c[101] = { 0 };
    int n[26] = { 0, };
    scanf("%d", &N);
    int size, count = N;
    for (int i = 0; i < N; i++)
    {
        memset(n, 0, sizeof(n));
        scanf("%s", c);
        size = strlen(c);
        for (int j = 0; j < size; j++)
        {
            if (c[j] == c[j - 1]) continue;
            if (n[c[j] - 97] > 0)
            {
                count--;
                break;
            }
            n[c[j] - 97]++;
        }
    }
    printf("%d", count);
    return 0;
}