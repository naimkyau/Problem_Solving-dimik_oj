#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int time = 0; time < t; time++)
    {
        int n;
        scanf("%d", &n);
        getchar();

        char **str = (char **)malloc(n * sizeof(char *));
        for (int i = 0; i < n; i++)
        {
            str[i] = (char *)malloc(10001 * sizeof(char));
            scanf("%[^\n]", str[i]); 
            getchar(); 
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (strcmp(str[i], str[j]) > 0) {
                    char temp[10001];
                    strcpy(temp, str[i]);
                    strcpy(str[i], str[j]);
                    strcpy(str[j], temp);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%s\n", str[i]);
        }

        for (int i = 0; i < n; i++) {
            free(str[i]);
        }
        free(str);
    }
    return 0;
}
