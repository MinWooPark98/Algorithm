#include <stdio.h>

int main()
{
    int n, i = 1, count = 0;
    scanf("%d", &n);
    while (1)
    {
        count += i;
        if (count >= n)
        {
            if(i % 2 == 0)
            {
                printf("%d/%d", i - (count - n), count - n + 1);
                break;
            }
            else
            {
                printf("%d/%d", count - n + 1, i - (count - n));
                break;
            }
        }
        ++i;
    }
    return 0;
}