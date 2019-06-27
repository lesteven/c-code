#include <stdio.h>

int main() {
  int num = 10;
  printf("address of num %x\n", &num);
  int *ptr = NULL;
  printf("address of ptr %x\n", &ptr);
  ptr = &num;
  printf("address of variable in ptr %x\n", ptr);
  printf("value of variable in ptr %d\n", *ptr);
}
