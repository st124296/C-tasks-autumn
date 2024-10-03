#include <cstdio>
int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int t = 0;
	
	int j = 0;
	int k = 0; 

	scanf_s("%d", &n);

	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &t);

		if (t > 0)
		{
			j += 1;
		}
		else
		{
			j = 0;
		}
		if (j > k)
		{
			k = j;
		}
	}

	printf("%d", k);
	
	return 0;
}