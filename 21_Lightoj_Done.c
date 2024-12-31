
// Reverse Word

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for (int i = 0; i < t; i++) {
        char str[10300];
        char rev[10300];
        int rev_index = 0;
        gets(str);
        int len = strlen(str);
        for (int i = 0; i < len; i++) {
            rev[rev_index] = str[len-i-1];
            rev_index++;
        }
        rev[rev_index] = '\0';
        printf("%s\n",rev);
        
    }
    
    
    return 0;
}