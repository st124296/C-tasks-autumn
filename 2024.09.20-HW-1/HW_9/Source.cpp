#include<iostream>

int main(int argc, char* argv[])
{
	int h, a, b;

	scanf_s("%d", &h);
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int d = a - b;
	printf("%d", (h > a) * (h - b - 1) / d + 1);

	return EXIT_SUCCESS;
}