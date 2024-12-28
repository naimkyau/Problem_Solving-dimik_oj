
// Square Number

#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        long long int n;
        double x;
        int y;
        scanf("%lld",&n);
        x = sqrt(n);
        y = x;
        if (x == y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}