#include<cstdio>

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;

	scanf_s("%d %d", &x, &y);

	if (x == 1 && y == 1) {
		printf("%d", 0);
	}
	else if (x == y && x != 1 && y != 1 ) {
		printf("%d", 2);
	}
	else {
		printf("%d", 1);
	}

	return 0;
}