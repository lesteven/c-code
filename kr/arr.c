#include <stdio.h>

int main() {
    int arr[] = {4,5,6};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d\n", arr[i]);
    }
    printf("%d bytes\n", sizeof(arr));
    printf("%d bytes\n", sizeof(arr[0]));
}
