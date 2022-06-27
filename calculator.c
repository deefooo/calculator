#include <stdio.h>

int main() {

  char operator;
  double num1;
  double num2;
  double result;

  printf("enter an operator (+ - * /): ");
  scanf("%c", &operator);

  printf("enter first number: ");
  scanf("%lf", &num1);
  printf("enter second number: ");
  scanf("%lf", &num2);

  switch(operator){
    case '+':
      result = num1 + num2;
      printf("result: %.2lf\n", result);
      break;

    case '-':
      result = num1 - num2;
      printf("result: %.2lf\n", result);
      break;

    case '*':
      result = num1 * num2;
  	  printf("result: %.2lf\n", result);
      break;

    case '/':
      result = num1 / num2;
      printf("result: %.2lf\n", result);
      break;

    default:
  	printf("%c is not valid\n", operator);
  }

  return 0;
}
