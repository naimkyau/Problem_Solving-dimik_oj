
// Descending Number

#include <stdio.h>

int main() {
    for (int i = 999; i >= 0; i--)
    {
        printf("%d ",i+1);
        if (i % 5 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}