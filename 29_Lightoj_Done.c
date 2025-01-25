
// 	Character Recognition

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for (int j = 0; j < t; j++) {
        char intput ;
        scanf("%c",&intput);
        getchar();
        if (intput >= 65 && intput <= 90)
        {
            printf("Uppercase Character\n");
        }
        else if (intput >= 97 && intput <= 122)
        {
            printf("Lowercase Character\n");
        }
        else if (intput >= 48 && intput <= 57)
        {
            printf("Numerical Digit\n");
        }
        else
        {
            printf("Special Characters\n");
        }
        
    }
    return 0;
}