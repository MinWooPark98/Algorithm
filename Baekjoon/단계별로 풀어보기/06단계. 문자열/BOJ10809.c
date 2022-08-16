#include <stdio.h>
#include <string.h>

int main()
{
    int n[26];
    memset(n,-1,sizeof(n));
    char c[101] = { 0 };
    scanf("%s", c);
    for(int i = 0; i < 101; i++)
    {
        if(c[i] == 0) break;
        if(n[c[i] - 97] != -1) continue;
        n[c[i] - 97] = i;
    }
    for(int i = 0; i < 26; i++)
        printf("%d ", n[i]);
    return 0;
}