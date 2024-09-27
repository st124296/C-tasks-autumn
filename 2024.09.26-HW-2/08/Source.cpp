#include<cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int ans = 0;
	int vrem = 0;

	scanf_s("%d %d", &n, &m);

	if (n > m) {
		vrem = n;
		n = m;
		m = vrem;
	}
	if (n == 1) {
		ans = 4 * m;
	}
	else if (n % 2 == 0 && m % 2 == 0) {
		ans = 2 * ((n + 1) * m + n);
	}
	else {
		ans = (m + 1) * n + (n + 1) * m;
		ans += (2 * (m - 1) + 2 * (n - 1)) / 2;
		if (n * m % 2 == 0)
			ans += 2;
	}
	printf("%d", ans);

	return 0;
}