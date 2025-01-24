
// Alternate Elements

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int skip = 2, len = (n + 1) / 2, altIndex = 0;
        int *arr;
        int altArr[len];
        arr = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int j = 1; j <= n; j++)
        {
            if (j % 2 != 0)
            {
                altArr[altIndex] = arr[j - 1];
                altIndex++;
            }
        }
        for (int j = 0; j < len; j++)
        {
            printf("%d ", altArr[j]);
        }
        printf("\n");
        free(arr);
    }
    return 0;
}
