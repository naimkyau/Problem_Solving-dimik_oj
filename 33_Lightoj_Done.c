
// Divisible 1

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int time = 0; time < t; time++)
    {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        long long first = ((a + c - 1) / c) * c;

        if (first <= b)
        {
            for (long long i = first; i <= b; i += c)
            {
                printf("%lld\n", i);
            }
        }
        printf("\n");
    }
    return 0;
}
