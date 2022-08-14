#include <stdio.h>

int main()
{
    int N, sum;
    sum = 0;
    scanf("%d", &N);
    char c[N];
    scanf("%s", c);
    for(int i = 0; i < N; i++)
        sum += c[i] - 48;
    printf("%d", sum);
    return 0;
}