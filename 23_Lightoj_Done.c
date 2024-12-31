
// Letter to Number

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    getchar();
    for (int j = 0; j < t; j++) {
        
        char str[110];
        gets(str);
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'A'){printf("1");}
            if (str[i] == 'B'){printf("2");}
            if (str[i] == 'C'){printf("3");}
            if (str[i] == 'D'){printf("4");}
            if (str[i] == 'E'){printf("5");}
            if (str[i] == 'F'){printf("6");}
            if (str[i] == 'G'){printf("7");}
            if (str[i] == 'H'){printf("8");}
            if (str[i] == 'I'){printf("9");}
            if (str[i] == 'J'){printf("10");}
            if (str[i] == 'K'){printf("11");}
            if (str[i] == 'L'){printf("12");}
            if (str[i] == 'M'){printf("13");}
            if (str[i] == 'N'){printf("14");}
            if (str[i] == 'O'){printf("15");}
            if (str[i] == 'P'){printf("16");}
            if (str[i] == 'Q'){printf("17");}
            if (str[i] == 'R'){printf("18");}
            if (str[i] == 'S'){printf("19");}
            if (str[i] == 'T'){printf("20");}
            if (str[i] == 'U'){printf("21");}
            if (str[i] == 'V'){printf("22");}
            if (str[i] == 'W'){printf("23");}
            if (str[i] == 'X'){printf("24");}
            if (str[i] == 'Y'){printf("25");}
            if (str[i] == 'Z'){printf("26");}
        }
        printf("\n");
    }
    
    return 0;
}