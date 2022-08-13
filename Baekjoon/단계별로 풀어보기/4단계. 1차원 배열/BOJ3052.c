#include <stdio.h>

int main()
{
    int div;
    int A[10];
    div = 10;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
        A[i] %= 42;
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(A[i] == A[j]) 
            {
                div--;
                break;
            }
        }
    }
    printf("%d", div);
    return 0;
}