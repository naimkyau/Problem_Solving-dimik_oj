
// Palindrome

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for (int j = 0; j < t; j++) {
        char str[1005];
        char rev[1005];
        int rev_index = 0;
        gets(str);
        int len = strlen(str);
        for (int i = 0; i < len; i++) {
            rev[rev_index] = str[len-i-1];
            rev_index++;
        }
        rev[rev_index] = '\0';
        int pal = strcmp(str, rev);
        if (pal == 0)
        {
            printf("Yes! It is palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not palindrome!\n");
        }
    }
    return 0;
}