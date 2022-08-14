#include <stdio.h>

void change(char * c);

int main()
{
    char a[4], b[4];
    int a_n = 0, b_n = 0, n = 100;
    scanf("%s %s", a, b);
    change(a);
    change(b);
    for(int i = 0; i < 3; i++)
    {
        a_n += (a[i] - 48) * n;
        b_n += (b[i] - 48) * n;
        n /= 10;
    }
    if(a_n > b_n)
        printf("%d", a_n);
    else if(a_n < b_n)
        printf("%d", b_n);
    return 0;
}

void change(char * c)
{
    char temp;
    temp = c[0];
    c[0] = c[2];
    c[2] = temp;
}