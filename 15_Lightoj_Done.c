
// Character Count

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for (int k = 0; k < t; k++)
    {
        char letter[26];
        int count[26] = {0};
        int isCount[26] = {0};
        for (int i = 0; i < 26; i++)
        {
            letter[i] = i+97;    // a to z
        }
        char str[1000];
        gets(str);
        str[strcspn(str, "\n")] = '\0';

        for (int i = 0; i < strlen(str); i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (str[i] == letter[j])
                {
                    count[j]+= 1;
                }
            }
        }

        // for (int i = 0; i < 26; i++) {
        //     if (count[1] != 0)
        //     {
        //         printf("%c = %d\n", letter[i], count[i]);
        //     }
            
        // }

        for (int i = 0; i < strlen(str); i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (str[i] == letter[j])
                {
                    if (isCount[j] == 1)
                    {
                        continue;
                    }
                    printf("%c = %d\n", letter[j], count[j]);
                    isCount[j] = 1;
                }
            }
        }
        if (k != t-1)
        {
            printf("\n");
        }
    }
    return 0;
}