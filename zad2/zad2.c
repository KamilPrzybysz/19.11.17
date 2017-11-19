#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  printf("int: %ld\n", sizeof(int));
  printf("long int: %ld\n", sizeof(long int));
  printf("double: %ld\n", sizeof(double));
  printf("long double: %ld\n", sizeof(long double));
  printf("short: %ld\n", sizeof(short));
  printf("long long: %ld\n", sizeof(long long));
  printf("float: %ld\n", sizeof(float));
  printf("bool: %ld\n", sizeof(bool));
  printf("char: %ld\n", sizeof(char));
  return 0;
}
