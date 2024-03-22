#include <stdio.h>

int main()
{
	int i, somme, tab[8];

	tab[0] = 1;
	somme = 0;
	for( i=1 ; i < 8 ; i++ ) {
		tab[i] = tab[i-1] * 2;
	}

	i = 0;
	while(tab[i] < 100) {
		somme = somme + tab[i];
		i++;
	}

	printf("somme = %d - ",somme);
	printf("tab = %d",tab[0]);
	for( i=1 ; i < 8 ; i++ ) {
		printf(",%d",tab[i]);
	}

	return 0;
}