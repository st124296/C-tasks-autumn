#include<iostream> 

int main(int argc, char* argv[])
{
	int a, b, c;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	c = a + b - 1;

	printf("%d\n", c - a);
	printf("%d", c - b);

	return EXIT_SUCCESS;
}