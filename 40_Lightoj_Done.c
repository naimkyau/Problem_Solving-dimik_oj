
// Sum of Series 1

#include <stdio.h>
#include <math.h>


int main() {
    int time;
    scanf("%d",&time);
    getchar();
    for (int t = 0; t < time; t++) {

        int x, k, result;
        double sum = 0;
        scanf("%d %d",&x, &k);
        for (int i = 0; i <= k; i++)
        {
            sum += pow(x, i);
        }
        printf("Result = %.0lf\n",sum);
        

    }
    return 0;
}