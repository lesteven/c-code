#include <stdio.h>


int main() {
    int num = 32;
    fwrite(&num, sizeof(int), 1, stdout);
    return 0;
}
