#include <stdio.h>
#include <string.h>

int main()
{
    int n[26] = {0, };
    int a = 0;
    int b = 0;
    char c[1000001];
    scanf("%s", c);
    for(int i = 0; i < 1000001; i++)
    {
        if(c[i] == 0) break;
        if(c[i] >= 97) c[i] -= 32;
        n[c[i] - 65]++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(a < n[i]) 
        {
            a = n[i];
            b = i;
        }
        else if(a == n[i]) b = -2;
    }
    printf("%c", b + 65);
    return 0;
}