
// Box 1

#include <stdio.h>

int main() {
    int t, n;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d",&n);
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        if (i != t)
        {
            printf("\n");
        }
    }
    return 0;
}
