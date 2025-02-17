
// Number Disaster

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++) {
        
        int num, rev = 0;
        scanf("%d",&num);
        while (num!=0) {
            int temp = num%10;
            rev = (rev*10) + temp;
            num = num/10;
        }
        printf("%d\n",rev);
    }
    return 0;
}
