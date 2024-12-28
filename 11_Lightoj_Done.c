
// Factorial

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++) {
        
        int n;
        int fact = 1;
        scanf("%d",&n);
        for (int i = n; i >= 1; i--)
        {
            if (n == 0 || n == 1)
            {
                fact =1;
            }
            fact = (fact * i);
        }
            printf("%lld\n",fact);
    }
    return 0;
}