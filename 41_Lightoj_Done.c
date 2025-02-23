
// Sum of Series 2

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for (int j = 0; j < t; j++) {
        int n;
        float sum = 0.0;
        long long int fact = 1;
        scanf("%d",&n);
        for (int i = 1; i <= n; ++i) {
            fact *= i;
            sum += (float)i / fact;
        }
            printf("%.4f\n",sum);
    }
    return 0;
}