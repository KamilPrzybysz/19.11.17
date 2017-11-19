#include<stdio.h>

int main()
{

int i[3];
printf("Podaj liczbę a: ");
scanf("%d", &i[0]);
printf("Podaj liczbę b: ");
scanf("%d", &i[1]);
printf("Podaj liczbę c: ");
scanf("%d", &i[2]);

if(i[0]>i[1])
{
  if(i[0]>i[2])
  {
    printf("%d, %d, %d\n", i[0], i[1], i[2]);
  }
  else
  {
    printf("%d, %d, %d\n", i[0], i[2], i[1]);
  }
}
else if(i[1]>i[2])
{
  if(i[0]>i[2])
  {
    printf("%d, %d, %d\n", i[1], i[0], i[2]);
  }
  else
  {
    printf("%d, %d, %d\n", i[1], i[2], i[0]);
  }
}
else
{
  if(i[0]>i[1])
  {
    printf("%d, %d, %d\n", i[2], i[0], i[1]);
  }
  else
  {
    printf("%d, %d, %d\n", i[2], i[1], i[0]);
  }
}


  return 0;
}
