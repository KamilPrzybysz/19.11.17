#include<stdio.h>
#include<math.h>

int main()
{
printf("Podaj liczbę zmiennoprzecinkową: ");
double a;
scanf("%lf", &a);
printf("Bez zaokrąglenia: %lf\n", a);

int b=round(a);
printf("Round: %d\n", b);
printf("Round: %.4lf\n", a);



  return 0;
}
