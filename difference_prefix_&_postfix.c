#include <stdio.h>

int decrement(int a, int b)
{
	a = 5;

	// POSTFIX
	b = a--;
	printf("%d", b);

	// PREFIX
	int c = --b;
	printf("\n%d", c);
}

// Driver code
int main()
{
	int x, y;
	decrement(x, y);

	return 0;
}
