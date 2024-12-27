
// Divisor

#include <stdio.h>

int main() {
    int T, n;
    scanf("%d",&T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d",&n);
        printf("Case %d: ",i);
        for (int i = 1; i <= n; i++)
        {
            if (n%i == 0)
            {
                printf("%d ",i);
            }   
        }
        printf("\n");
    }
    return 0;
}
