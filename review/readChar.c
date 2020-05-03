#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp = fopen(argv[1], "r");
    char character = '\0';
    while ((character = fgetc(fp)) != EOF) {
        printf("%d %c |", character, character);
    }
    fclose(fp);
}
