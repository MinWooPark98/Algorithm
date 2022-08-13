#include <stdio.h>

int main()
{
    int a[9];
    int max, s;
    for(int i = 0; i < 9; i++)
        scanf("%d", &a[i]);
    max = a[0];
    s = 0;
    for(int i = 1; i < 9; i++)
    {
        if(max < a[i])
        {
            max = a[i];
            s = i;
        }
    }
    printf("%d\n%d", max, s + 1);
    return 0; 
}