#include <stdio.h>
#include <string.h>

int main() {
    char *searchTerm = "foo";
    char *sentence = "hello there, what's foo? i dont know";
    char *sentence2 = "hello there, what's? i dont know";
    char *found = strstr(sentence, searchTerm);
    printf("%s\n", found);

    char *empty = "";
    if (empty == "") {
        printf("it is empty\n");
    }

    return 0;
}
