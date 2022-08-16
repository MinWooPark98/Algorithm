#include <stdio.h>
#include <math.h>

int main()
{
    int T, n, check1 = 0, check2 = 0;
    int num[2];
    scanf("%d", &T);

    for (int i = 0; i < T; ++i)
    {
        scanf("%d", &n);
        if (n % 4 == 0 && n != 4)
        {
            num[0] = n / 2 - 1;
            num[1] = n / 2 + 1;
        }
        else
        {
            num[0] = n / 2;
            num[1] = n / 2;
        }

        while (n != 4)
        {
            check1 = 0;
            check2 = 0;
            for (int j = 2; num[0] % j != 0; ++j)
            {
                if (j > (int)sqrt((double)num[0]))
                {
                    ++check1;
                    break;
                }
            }
            for (int j = 2; num[1] % j != 0; ++j)
            {
                if (j > (int)sqrt((double)num[1]))
                {
                    ++check2;
                    break;
                }
            }
            if (check1 == 1 && check2 == 1)
                break;
            num[0] -= 2;
            num[1] += 2;
        }
        printf("%d %d\n", num[0], num[1]);
    }    
    return 0;
}