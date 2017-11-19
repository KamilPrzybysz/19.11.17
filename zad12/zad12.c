#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	printf("Podaj liczbę kończącą przedział od 0: ");
	int n;
	scanf("%d", &n);
	while(n<0)
	{
		printf("Liczba musi być większa od 0!\n");
		printf("Podaj właściwą liczbę: ");
		scanf("%d", &n);
	}

  srand(time(NULL));

    int tab[10];

    int i;
    for(i=0; i<=10; i++)
    {

      int liczba=(rand()%n);
      tab[0]=liczba;
      printf("%d\n", tab[0]);
      tab[0]++;
    }

       return 0;
}
