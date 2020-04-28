#include <stdio.h>

// arrays are passed by reference
// therefore they are mutable

void change(int a[]) {
    a[0] = 22;
}

int main() {
    int arr[] = { 1, 2 };
    change(arr);
    printf("%d\n", arr[0]);
    return 0;
}
