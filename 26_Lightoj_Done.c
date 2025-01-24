
// Alien Gupi

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for (int j = 0; j < t; j++) {
        float food;
        int count = 1;
        scanf("%f",&food);
        for (int i = food; i>1 ; i/=2) {
            count++;
        }
        printf("%d days\n",count);
    }
    return 0;
}