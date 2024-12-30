
// Word Count 1

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for (int i = 0; i < t; i++) {
        char str[10300];
        int count = 0;
        gets(str);
        int len = strlen(str);
        for (int i = 0; i < (len); i++) {
            if(str[i] == ' ' )
            {
                count++;
            }
        }
        printf("Count = %d\n", count+1);
        
    }
    
    
    return 0;
}