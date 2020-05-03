#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *firstFile = argv[1];
    char *temp = "_temp";
    char newFile[strlen(firstFile) + strlen(temp)];
    strcpy(newFile, firstFile);
    strcat(newFile, temp);
    FILE *write = fopen(newFile, "w");
    for (int i = 1; i < argc; i++) {
        char *filename = argv[i];
        FILE *fp = fopen(filename, "r");

        char *line = NULL;
        size_t size = sizeof(&line);

        while(getline(&line, &size , fp) != -1) {
            fputs(line,write);
        }
        fclose(fp);
    }
    fclose(write);
    return 0;
}
