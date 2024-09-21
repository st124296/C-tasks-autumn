#include<iostream>

int main(int argc, char* argv[])
{
	int N, a, b;
	scanf_s("%d", &N);
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d", a * b * N * 2);
	return EXIT_SUCCESS;
}