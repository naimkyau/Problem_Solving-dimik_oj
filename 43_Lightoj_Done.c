#include <stdio.h>

int power(int p, int q, int c){
    int pow = 1;
    for (int i = 0; i < q; i++) {pow = (pow * p) % c;}
    return pow;
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    for (int time = 0; time < t; time++) {
        int p, q, c;
        scanf("%d %d %d", &p, &q, &c);
        int pow = power(p, q, c);

        printf("Result = %d\n", pow);

        

    }
    return 0;
}
