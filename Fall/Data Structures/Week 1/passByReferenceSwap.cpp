#include <iostream>

void swap(int c, int d) {
  int temp = c;
  c = d;
  d = temp;
}

int main() {
  int a = 1;
  int b = 2;
  swap(a, b);
  printf("a = %d, b = %d\n", a, b);
}

