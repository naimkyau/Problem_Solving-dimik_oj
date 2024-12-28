
// Small to Large

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        int p1, p2, p3;
        scanf("%d %d %d", &a, &b, &c);
        {
            if (a > b && a > c)
            {
                p1 = a;
                if (b > c)
                {
                    p2 = b;
                    p3 = c;
                }
                else
                {
                    p2 = c;
                    p3 = b;
                }
            }
            else if (b > a && b > c)
            {
                p1 = b;
                if (a > c)
                {
                    p2 = a;
                    p3 = c;
                }
                else
                {
                    p2 = c;
                    p3 = a;
                }
            }
            else
            {
                p1 = c;
                if (a > b)
                {
                    p2 = a;
                    p3 = b;
                }
                else
                {
                    p2 = b;
                    p3 = a;
                }
            }
        }
        printf("Case %d: %d %d %d\n", i+1, p3, p2, p1);
    }

    return 0;
}