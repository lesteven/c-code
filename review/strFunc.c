#include <stdio.h>
#include <string.h>

void getStr(char *line, char newLine[]) {
    printf("%ld\n", strlen(line));
    for (int i = 0; i < strlen(line); i++) {
        newLine[i] = line[i];
        printf("%c %d\n",line[i], i);
    }
}

int main() {
    char *line = "hello world";
    char newLine[strlen(line)*2 + 1];
    memset(newLine,'\0',strlen(line)*2 + 1);

    getStr(line, newLine);
    printf("%s\n", newLine);
    return 0;
}
