
// Prime Number
#include <stdio.h>
#include <math.h>

int main() {
    int time;
    scanf("%d", &time);

    for (int t = 0; t < time; t++) {
        int count_prime = 0, a, b;
        scanf("%d %d", &a, &b);

        for (; a <= b; a++) {
            if (a == 1) {
                continue;
            }

            int is_prime = 1;
            if (a == 2) {
                count_prime++;
                continue;
            }

            for (int j = 2; j <= sqrt(a); j++) {
                if (a % j == 0) {
                    is_prime = 0;
                    break;
                }
            }

            if (is_prime == 1) {
                count_prime++;
            }
        }

        printf("%d\n", count_prime);
    }

    return 0;
}
