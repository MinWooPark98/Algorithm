#include <stdio.h>

void selfnumber();

int main()
{
    selfnumber();
    return 0;
}

void selfnumber()
{
    int n, d;
    int a[10001] = {0, };
    for(int i = 0; i <= 10000; i++)
    {
        n = i;
        d = n;
        while(n > 0)
        {
            d += n % 10;
            n /= 10;
        }
        if(d <= 10000)
            a[d] = 1;
    }
    for(int i = 1; i <= 10000; i++)
    {
        if(a[i] == 0)
            printf("%d\n", i);
    }
}