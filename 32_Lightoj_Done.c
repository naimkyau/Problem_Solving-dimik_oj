
// Multiple of X

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int time = 0; time < t; time++)
    {
        long long x, n;
        scanf("%lld %lld", &x, &n);
        if (x > n)
        {
            printf("Invalid!\n");
        }
        else
        {
            long long sum = x;
            while (x <= n)
            {
                printf("%lld\n", x);
                x += sum;
            }
        }
                printf("\n");
    }
    return 0;
}