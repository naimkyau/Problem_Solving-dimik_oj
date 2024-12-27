
// Summation

#include <stdio.h>

int main()
{
    int t, n, f, l, sum;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        f = n;
        while (f >= 10) {
            f = f / 10;
        }
        l = n % 10;
        sum = f + l;
        printf("Sum = %d\n",sum);
    }
    return 0;
}