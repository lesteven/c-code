#include <stdio.h>

void mod(char arr[]) {
    arr[0] = 'b';
}

int main() {
    char str[10] = "hello";
    char *point = str;
    printf("%c\n", *point);
    printf("%s\n", point);
    mod(str);
    printf("%s\n", point);
}
