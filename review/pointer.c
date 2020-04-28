#include <stdio.h>

int main() {
    // print address of num
    int num = 10;
    printf("%p\n", &num);

    int *numPoint = NULL;

    // assign address to pointer
    numPoint = &num;
    printf("%p\n", numPoint);
    printf("%d\n", *numPoint);

    // dereference pointer and give it value
    *numPoint = 20;
    printf("%d\n", *numPoint);
    printf("%p\n", numPoint);

    // when you assign value to pointer it changes
    // the value at that variable
    printf("%d\n", num);

    return 0;
}
