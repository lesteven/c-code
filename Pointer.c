#include <stdio.h>

/*
* int *a;
*   pointer, stores memory address of variable
*
* int b = 10;
*   &b -> memory address of b
*
* Working with pointers.
*   *a -> value at memory addres
*   a -> stored memory address
*   &a -> memory address of a
*/


int swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = *a;
}

int showNum(int a, int b) {
  printf("%d, %d \n", a, b);

}

int change(int *a) {
  *a = 100;
}
int main() {
  int a = 20; 
  int b = 10;  
  showNum(a, 0);

  change(&a);

  showNum(a, 0);

  return 0;
}
