#include <stdio.h>
/*
  increment arrays
    - when you increment the pointer, you move the pointer in the array.
    - pointer in array starts at 0 position.
    - pointer position could also be decremented.
*/
int main() {
  int arr[] = {1,2,3,4,5};

  printf("%d\n", arr[0]);
  (*arr)++;
  printf("%d\n", arr[0]);

  int *p = arr;
  printf("%d\n", *p);

  int **pp = &p;
  (*pp)++;
  (*(*pp))++;
  printf("%d\n", *p);


  (*pp)+=3;
  (*(*pp))++;
  printf("%d\n", *p);

  (*pp)-=3;
  printf("%d\n", *p);
}
