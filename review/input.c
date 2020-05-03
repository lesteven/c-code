#include <stdio.h>


int main(int argc, char *argv[]) {
    printf("%d\n", argc);
    while(1) {
        char *line = NULL;
        size_t size = sizeof(&line);
        getline(&line, &size, stdin);
        printf("%s", line);
    }
    return 0;
}
