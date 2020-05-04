#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *hello = "hello/goodbye/farewell";
    char *word = NULL;
    int len = strlen(hello);
    for (int i = len-1; i >= 0; i--) {
        if (hello[i] == '/') {
            word = malloc(sizeof(char) * (len-i));
            printf("len - i: %d\n", len - i);
            strncpy(word, hello + sizeof(char) * (i+1), len-i);
            break;
        }
    }
    for (int i = 0; i < strlen(word); i++) {
        printf("%d %c\n", i, word[i]);
    }
    printf("%s\n", word);

    return 0;
}
