#include <stdio.h>
#include <string.h>

int main() {
    char *foo = "hello";
    char *bar = "hello";
    printf("%d", strcmp(foo,bar));
    printf("%d", foo == bar);
    return 0;
}
