#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int* a = (int*)malloc(n * sizeof(int));
	int i = 0;
	int k = 0;
	int m = 0;

	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", a + i);
		if (*(a + i) < *(a + m))m = i;
	}
	for (i = m; i < n; i++) 
	{
		std::cout << *(a + i) << ' ';
	}
	for (i = 0; i < m; i++)
	{
		std::cout << *(a + i) << ' ';
	}

	free(a);
	return 0;
} 