
// Character Frequency

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++) {
        char str[10001];
        char a;
        int count = 0;
        scanf("%[^\n]", str);
        getchar();
        
        scanf("%c", &a);
        getchar();
        
        for (int j = 0; j < strlen(str); j++) {
            if (a == str[j]) {
                count++;
            }
        }
        if (count == 0)
        {
            printf("'%c' is not present\n",a);
        }
        else
        {
            printf("Occurrence of '%c' in '%s' = %d\n", a, str, count);
        }
        
        
    }
    
    return 0;
}