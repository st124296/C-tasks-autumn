#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int m = 0;

	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", a + i);
	}
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) <= *(a + m))
		{
			m = i;
		}
	}
	for (int i = m; i < n; ++i)
	{
		std::cout << *(a + i) << ' ';
	}
	for (int i = 0; i < m; ++i) {
		std::cout << *(a + i) << ' ';
	}
	free(a);
	return 0;
}