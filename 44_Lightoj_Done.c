#include <stdio.h>

long long int fact(int n) {
    long long int result = 1;
    for(int i = 1; i <= n; i++) {result *= i;}
    return result;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int time = 0; time < t; time++) {
        int n;
        scanf("%d", &n);
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= i; j++) {
                long long int c;
                c = (fact(i))/((fact(j))*(fact(i-j)));
                printf("%lld%c", c, j==i?'\n':' ');
            }
        }   
        printf("\n");
    }
    return 0;
}
