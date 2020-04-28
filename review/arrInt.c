#include <stdio.h>
#include <stdlib.h>


int main() {
    int nums[] = {5,10,22,18};
    printf("%lu\n", sizeof(*nums));
    printf("value of *nums = %d\n", *nums);
    printf("%lu\n", sizeof(nums));
    printf("%lu\n", sizeof(&nums));
    printf("%lu\n", sizeof(int));
    return 0;
}
