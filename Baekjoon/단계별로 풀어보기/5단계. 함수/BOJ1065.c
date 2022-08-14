#include <stdio.h>

void hansu(int N);

int main()
{
    int N;
    scanf("%d", &N);
    hansu(N);
    return 0;
}

void hansu(int N)
{
    int sub, check, count = 99;
    if(N < 100)
    {
        printf("%d", N);
        return;
    }
    
    for(int i = 100; i < N + 1; ++i)
    {
        check = 0;
        sub = (i / 10) % 10 - i % 10;
        for(int j = i; check == 0; j /= 10)
        {
            if(sub != (j / 10) % 10 - j % 10)
                ++check;
            if(j < 10)
            {
                ++count;
                break;
            }
        }
    }
    printf("%d", count);
}