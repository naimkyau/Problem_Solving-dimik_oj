
// Diamond Kingdom

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int time = 1; time <= t; time++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        for (int i = 0; i < (2 * a) - 1; i++)
        {
            if (i < a)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    printf("%d", b);
                    if (i != j)
                    {
                        printf(" ");
                    }
                }
            }
            else
            {
                for (int j = ((2 * a) - 1) - i; j > 0; j--)
                {
                    printf("%d", b);
                    if (j != 1)
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}