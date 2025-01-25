
// Perfect Number 1

#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    char ar[8][20] = {"6", "28", "496", "8128", "33550336", "8589869056", "137438691328", "2305843008139952128"};
    int result[t];
    char dalal[t][20];

    for (int i = 0; i < t; i++) {
        scanf("%s", dalal[i]);
        
        result[i] = 0;

        for (int j = 0; j < 8; j++) {
            if (strcmp(ar[j], dalal[i]) == 0) {
                result[i] = 1;
                break;
            }
        }
    }

    for (int i = 0; i < t; i++) {
        if (result[i] == 1) {
            printf("YES, %s is a perfect number!\n", dalal[i]);
        } else {
            printf("NO, %s is not a perfect number!\n", dalal[i]);
        }
    }

    return 0;
}
