
// Count Numbers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++)
    {
        int num_count = 1;
        char *input;
        input = (char *)malloc(10000001 * sizeof(char));
        fgets(input, 10000001, stdin);
        input[strcspn(input, "\n")] = '\0';

        int word = 1;
        for (int j = 0; j < strlen(input); j++)
        {
            if (input[j] == ' ')
            {
                if (word == 0)
                {
                    continue;
                }
                word = 0;
            }
            else
            {
                if (word == 1)
                {
                    continue;
                }
                word = 1;
            }
            while (word)
            {
                num_count++;
                break;
            }
        }
        printf("%d\n", num_count);
        free(input);
    }

    return 0;
}
