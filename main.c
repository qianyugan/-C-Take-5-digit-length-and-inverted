#include <stdio.h>
#include <math.h>

int main() {
  int a, b;
  int s = 0;
  scanf("%d", &a);
  b = len(a);
  while (a) {               //取倒序
    s = s * 10 + a % 10;
    a = a / 10;
  }
  printf("there are %d , %d\n", b, s);
}


int len(int a) {   //取长度的函数len()
  int count = 0;
  do {
    count++;
    a = a / 10;
  } while (a != 0);
  return count;
}
