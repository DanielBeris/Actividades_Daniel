#include <stdio.h>
int main ()
{
	int N;
	printf("Hasta que numero va a llegar?\n");
	scanf("%d", &N);
	for (int i = 0; i <= N; i+=5)
	{
		printf("El numero es: %d\n", i);
	}
}