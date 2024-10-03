#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	int i = 0;
	int v = 0;

	scanf_s("%d", &n);

	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &v);
		s += v;
	}

	if (s < n - s)
	{
		printf("%d\n", s);
	}

	else
	{
		printf("%d\n", n - s);
	}
	return 0;
}