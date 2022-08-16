#include <stdio.h>

int main()
 {
    int T;
    int k, n;
    int a[15][14] = { 0 };
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &k, &n);
        for (int j = 0; j <= k; j++)
        {
            for (int l = 0; l < n; l++)
            {
                if (j == 0 || l == 0)
                    a[j][l] = l + 1;
                else
                    a[j][l] = a[j][l - 1] + a[j - 1][l];
            }
        }
        printf("%d\n", a[k][n - 1]);
    }
}