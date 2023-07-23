#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */
#define MAX_LEN 20  /* maximum word length */

int main() {
    int c, state, len, i, j;
    int word_len[MAX_LEN];

    state = OUT;
    len = 0;

    for (i = 0; i < MAX_LEN; i++) {
        word_len[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (len > 0 && len < MAX_LEN) {
                ++word_len[len - 1];
            }
            len = 0;
        }
        else {
            state = IN;
            ++len;
        }
    }

    for (i = 0; i < MAX_LEN; i++) {
        printf("%2d | ", i + 1);
        for (j = 0; j < word_len[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}

