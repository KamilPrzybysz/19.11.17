#include<stdio.h>
#include<math.h>

int main()
{
printf("Podaj r koła:");
int r;
scanf("%d", &r);
while(r<=0)
{
  printf("Podaj r większe od 0: ");
  scanf("%d", &r);
}

int pole=M_PI*r*r;
int obwod=2*M_PI*r;

printf("Pole tego koła to: %d, a obwód to %d\n", pole, obwod);


  return 0;
}
