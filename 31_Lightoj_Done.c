
// Perfect Number 2

#include <stdio.h>

unsigned long long perfect_numbers[] = {6, 28, 496, 8128, 33550336, 40000001};
//, 8589869056, 137438691328, 2305843008139952128


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        unsigned long long n;
        scanf("%llu", &n);
        int j = 0;
        while (perfect_numbers[j] <= n) {
            printf("%llu\n",perfect_numbers[j]);
            j++;
        }
        printf("\n");
    }

    return 0;
}
