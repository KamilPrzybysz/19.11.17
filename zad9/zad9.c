#include<stdio.h>

int main()
{
  float a = 1.0 / 81;
  float b = 0;
  for (int i = 0; i < 729; ++ i)
  b += a;
  printf("%.15g\n", b);

  return 0;
}
