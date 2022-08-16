#include <stdio.h>

int main()
{
    int n, i = 0, sum = 1;
    scanf("%d", &n);
    while (1)
    {
        sum += 6 * i;
        if (n <= sum)
        {
            printf("%d", i + 1);
            break;
        }
        ++i;
    }
    return 0;
}