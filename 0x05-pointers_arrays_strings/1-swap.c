#include "main.h"

void swap_int(int *a, int *b)
{
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
