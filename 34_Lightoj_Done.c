
// Divisible 2

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int time = 0; time < t; time++)
    {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        long long d = a * b;
        long long first = d;
        while (first <= c) {
            printf("%lld\n", first);
            first += d;
        }
        printf("\n");
    }
    return 0;
}
