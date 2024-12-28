
// Run Rate 1

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int opponent_run, batsman_run, remain_ball;
        scanf("%d %d %d", &opponent_run, &batsman_run, &remain_ball);
        printf("%0.2lf ", (double)(batsman_run * 6) / (300 - remain_ball));
        if (opponent_run - batsman_run < 0)
        {
            printf("%0.2lf\n", 0.0);
            continue;
        }
        ++opponent_run;
        printf("%0.2lf\n", (double)((opponent_run - batsman_run) * 6) / remain_ball);
    }
    return 0;
}
