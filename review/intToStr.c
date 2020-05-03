#include <stdio.h>
#include <string.h>

int countDigits(unsigned long num) {
    int digits = 1;
    num = num/10;
    while (num > 0) {
        num = num/10;
        digits++;
    }
    return digits;
}

int main() {
    int num = 1;
    char foo[num];
    int count = countDigits(strlen(foo));
    printf("strlen %ld\n", strlen(foo));
    printf("%d\n", count);
    return 0;
}
