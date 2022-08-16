#include <stdio.h>
#include <math.h>

int main()
{
    int n, count;
    while (1)
    {
        scanf("%d", &n);
        count = 0;
        if (n == 0) break;
        if (n == 1) ++count;
        for (int i = 2 * n; i > n; --i)
        {
            int check = (int)sqrt((double)i);
            for (int j = 2; i % j != 0 ; ++j)
            {
                if (j >= check)
                {
                    ++count;
                    break;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}