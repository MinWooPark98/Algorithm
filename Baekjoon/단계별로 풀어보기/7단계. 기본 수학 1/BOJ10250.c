#include <stdio.h>

int main()
{
    int T, H, W, N;
    int room;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &H, &W, &N);
        if(N % H == 0)
            room = H * 100 + N / H;
        else
            room = (N % H) * 100 + (N / H + 1);
        printf("%d\n", room);
    }
    return 0;
}