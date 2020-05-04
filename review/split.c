#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    char *foo = strdup("goodbye/hello/world");
    char *split = NULL;
    while (foo != NULL) {
        split = strsep(&foo, "/");
    }
    printf("foo: %s\n", foo);
    printf("splitted: %s\n", split);
    return 0;
}
