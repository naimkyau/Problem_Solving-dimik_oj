#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 1000
#define MAX_LENGTH 100

typedef struct {
    char word[MAX_LENGTH];
    int count;
} WordCount;

int word_count(char *sentence, WordCount *word_counts, int *unique_words) {
    char *token;
    int total_words = 0;

    token = strtok(sentence, " ");
    while (token != NULL) {
        total_words++;
        int found = 0;
        for (int i = 0; i < *unique_words; i++) {
            if (strcmp(word_counts[i].word, token) == 0) {
                word_counts[i].count++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(word_counts[*unique_words].word, token);
            word_counts[*unique_words].count = 1;
            (*unique_words)++;
        }
        token = strtok(NULL, " ");
    }

    return total_words;
}

long long int recursion(int n) {
    if (n == 1) return 1;
    return n * recursion(n - 1);
}

int main() {
    int t;
    scanf("%d", &t);
    getchar(); 

    int results[t];

    for (int i = 0; i < t; i++) {
        char sentence[1000];
        fgets(sentence, sizeof(sentence), stdin);
        sentence[strcspn(sentence, "\n")] = '\0';

        WordCount word_counts[MAX_WORDS];
        int unique_words = 0;

        long long int upper_factorial = 1;
        int total_words = word_count(sentence, word_counts, &unique_words);
        long long int lower_factorial = recursion(total_words);

        for (int j = 0; j < unique_words; j++) {
            if (word_counts[j].count > 1) {
                upper_factorial *= recursion(word_counts[j].count);
            }
        }

        results[i] = lower_factorial / upper_factorial;
    }

    for (int i = 0; i < t; i++) {
        printf("1/%d\n", results[i]);
    }

    return 0;
}
