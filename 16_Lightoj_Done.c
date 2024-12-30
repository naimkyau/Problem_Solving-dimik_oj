
// Word Disaster

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char temp_word[]){
    char reverse_word[1005];
    int len = strlen(temp_word);
    for (int i = 0; i < len; i++) {
        reverse_word[i] = temp_word[len-i-1];
        if (i == (len-1))
        {
            reverse_word[i+1] = '\0';
        }
    }
    printf("%s ",reverse_word);
}

int main()
{
    int t ;
    scanf("%d",&t);
    getchar();
    for (int i = 0; i < t; i++) {
        char str[1005], temp_word[1005];
        gets(str);
        int len = strlen(str);
        int temp_index = 0;

        for (int i = 0; i <= len; i++)
        {
            if (str[i] != ' ' && str[i] != '\0')
            {
                temp_word[temp_index++] = str[i];
            }
            else
            {
                temp_word[temp_index] = '\0';
                // printf("%s ", temp_word);
                reverse(temp_word);
                temp_index = 0;
                memset(temp_word, 0, sizeof(temp_word));
            }
        }
        printf("\n");
    }
    return 0;
}
