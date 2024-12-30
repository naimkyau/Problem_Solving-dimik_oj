
// Vowel Count

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for (int i = 0; i < t; i++) {
        char str[1005];
        int count = 0;
        gets(str);
        int len = strlen(str);
        for (int i = 0; i < (len); i++) {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
        
    }
    
    
    return 0;
}