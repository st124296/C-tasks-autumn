#include<cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;

	int time = 0;;

	scanf_s("%d %d %d", &k, &m, &n);

	time = ((n * 2 + min(k, n) - 1) / min(k, n))*m;

	printf("%d\n", time);

	return 0;
}