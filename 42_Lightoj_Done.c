
// Sum of Series 3

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int time = 0; time < t; time++) {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("1");
        }
        else if (n == 1)
        {
            printf("2 + 1");
        }
        else
        {
            for (int i = n; i >= 2; i--) {
                printf("2^%d + ",i);
            }
            printf("2 + 1");
        }
        printf("\n");
    }
    return 0;
}