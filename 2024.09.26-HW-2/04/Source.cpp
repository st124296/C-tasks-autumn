#include<cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int z1 = 0;

	int x2 = 0;
	int y2 = 0;
	int z2 = 0;

	scanf_s("%d %d %d", &x1, &y1, &z1);
	scanf_s("%d %d %d", &x2, &y2, &z2);

	int a1 = 0;
	int b1 = 0;
	int c1 = 0;

	int a2 = 0;
	int b2 = 0;
	int c2 = 0;

	a1 = max(x1, max(y1, z1));
	c1 = min(x1, min(y1, z1));
	b1 = x1 + y1 + z1 - a1 - c1;

	a2 = max(x2, max(y2, z2));
	c2 = min(x2, min(y2, z2));
	b2 = x2 + y2 + z2 - a2 - c2;

	if (a1 == a2 && b1 == b2 && c1 == c2) {
		printf("Boxes are equal");

	}
	else if (a1 <= a2 && b1 <= b2 && c1 <= c2) {
		printf("The first box is smaller than the second one");
	}
	else if (a1 >= a2 && b1 >= b2 && c1 >= c2) {
		printf("The first box is larger than the second one");
	}
	else {
		printf("Boxes are incomparable");
	}

	return 0;
}