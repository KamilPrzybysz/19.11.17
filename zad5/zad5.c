#include<stdio.h>

int main()
{
double wzrost;
char znak;
printf("Podaj swój wzrost i znak: ");
scanf("%lf %c", &wzrost, &znak);
double wcale, wcm;
if(znak=='c')
{
  wcale=wzrost/2.540106952;
  printf("Twój wzrost w calach to %lf\n", wcale);
}
if(znak=='i')
{
  wcm=wzrost*2.540106952;
  printf("Twój wzrost w cm to %lf\n", wcm);
}



  return 0;
}
