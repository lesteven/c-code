#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printArr(char *wordArr[]) {

}

int main() {
    char *wordArr[] = {"hello", "farewell", "goodbye"};
    int size = sizeof(wordArr)/sizeof(wordArr[0]);
    for (int i = 0; i < size; i++) {
        printf("%p, %s\n", wordArr[i], wordArr[i]);
    }

    printf("===================\n");

    wordArr[2] = malloc(strlen("changed") + 1);
    strcpy(wordArr[2], "changed");
    wordArr[0] = "lala";
    for (int i = 0; i < size; i++) {
        printf("%p, %s\n", wordArr[i], wordArr[i]);
    }
    return 0;
}
