
// Even Odd 2

#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d",&T);
    getchar();
    char arr[T][105];
    for (int i = 0; i < T; i++)
    {
        fgets(arr[i], 105, stdin);
        int length = strlen(arr[i]);
        if (arr[i][length - 1] == '\n') {
            arr[i][length - 1] = '\0';
            length--;
        }
        char last_digit = arr[i][length - 1];
        int a;
        a = last_digit % 2 ;
        if (a ==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}