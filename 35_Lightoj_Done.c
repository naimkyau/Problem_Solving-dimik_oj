
// Out of Circle

#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int time = 1; time <= t; time++)
    {

        double root, calc;
        int Xc, Yc, r, X, Y;
        scanf("%d %d", &Xc, &Yc);
        scanf("%d", &r);
        scanf("%d %d", &X, &Y);
        calc = ((Xc - X)*(Xc - X)) + ((Yc - Y)*(Yc - Y));
        root = sqrt(calc);
        if ((double)r > root)
        {
            printf("The point is inside the circle\n");
        }
        else
        {
            printf("The point is not inside the circle\n");
        }
    }
    return 0;
}