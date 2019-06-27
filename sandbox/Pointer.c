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
*   3. *b -> does not exist
*/
/*
  If you want to change the value of something through side effects,
  get that value's memory address (&value) and then reassign its value
  (*value) to something else
*/

int swap(int *a, int *b) {
  int t = *a;
  printf("value at a: %d\n", *a);
  printf("memory address of a: %p\n", a);
  printf("memory address of copied a: %p\n", &a);
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

  printf("memory address of a: %p\n", &a);

  swap(&a, &b);


  return 0;
}


