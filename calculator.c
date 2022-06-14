#include <stdio.h>

int main() {

  int x;
  int y;
  int z;
  
  printf("enter first number:");
  scanf("%d", &x);
  printf("enter second number:");
  scanf("%d", &y);
  printf("");
  printf("please choose by number\n1)+     2)-     3)*     4)/\n");
  scanf("%d", &z);
  printf("");
  
  if (z == 1) {
    printf("answer:%d\n", x + y);
  } else if (z == 2) {
  	printf("answer:%d\n", x - y);
  } else if (z == 3) {
  	printf("answer:%d\n", x * y);
  } else if (z == 4) {
  	printf("answer:%d\n", x / y);
  } else {
  	printf("error\n");
  }
  
  return 0;
}