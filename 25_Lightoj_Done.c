
// LCM

#include <stdio.h>

long long gcd(long long a, long long b) {
    long long temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int time = 0; time < t; time++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        printf("LCM = %lld\n", lcm(a, b));
    }
    return 0;
}
