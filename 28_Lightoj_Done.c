
// Random Array

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for (int time = 0; time < t; time++) {
        int n, result = 1;
        scanf("%d", &n);
        int arr[20];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        if (arr[0] < arr[1])
        {
            for (int i = 1; i < n; i++) {
                if (arr[i-1] > arr[i])
                {
                    result = 0;
                }
                
            }
        }
        if (arr[0] > arr[1])
        {
            for (int i = 1; i < n; i++) {
                if (arr[i-1] < arr[i])
                {
                    result = 0;
                }
                
            }
        }
        if (result)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}