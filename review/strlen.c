#include <stdio.h>
#include <string.h>


int main() {
    char *foo = "hello";
    // strlen does not include '\0' in char count
    printf("%d\n", strlen(foo));
    return 0;
}
