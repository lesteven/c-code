#include <stdio.h>

/*
* int *a;
*   1. a -> memory address of another variable
*   2. *a -> value at memory address of other variable
*   3. &a -> memory address of a 
*
* int b = 10;
*   1. b -> value of b
*   2. &b -> memory address of b
*   3. *p -> does not exist
*/


int swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = *a;
}

int showNum(int a, int b) {
  printf("%d, %d \n", a, b);

}

// change value of a to 100;
int change(int *a) {
  *a = 100;
}

int main() {
  int a = 20; 
  int b = 10;  
  showNum(a, 0);

  change(&a);

  showNum(a, 0);

  printf("%p\n", &a);

  return 0;
}
