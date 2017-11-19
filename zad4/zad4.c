#include<stdio.h>

int main()
{
  int wiek, godzina, sekunda;
  printf("Podaj swój wiek: ");
  scanf("%d", &wiek);

  while(wiek<=0)
  {
    printf("Podaj swój wiek: ");
    scanf("%d", &wiek);
  }

godzina=wiek*365*24;
sekunda=godzina*3600;

printf("Twój wiek w godzinach to %d, a w sekundach %d\n", godzina, sekunda);


  return 0;
}
