
// Vowel Consonant

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for (int i = 0; i < t; i++) {
        char str[1005];
        char vow[1005];
        char con[1005];
        int vow_index = 0;
        int con_index = 0;
        gets(str);
        int len = strlen(str);
        for (int i = 0; i < (len); i++) {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vow[vow_index] = str[i];
                vow_index++;
            }
            else if(str[i] == ' '){
                continue;
            }
            else{
                
                con[con_index] = str[i];
                con_index++;
            }
        }
        vow[vow_index] = '\0';
        con[con_index] = '\0';
        
        printf("%s\n", vow);
        printf("%s\n", con);
        
    
    
    }
    return 0;
}