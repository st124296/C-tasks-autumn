#include<cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	bool ind = true;

	int l1 = 0;
	int w1 = 0;
	int h1 = 0;

	int l2 = 0;
	int w2 = 0;
	int h2 = 0;

	int lc = 0;
	int wc = 0;
	int hc = 0;

	scanf_s("%d %d %d", &l1, &w1, &h1);
	scanf_s("%d %d %d", &l2, &w2, &h2);
	scanf_s("%d %d %d", &lc, &wc, &hc);

	int vrem = 0;
	vrem = min(l1, w1);
	l1 = max(l1, w1);
	w1 = vrem;

	vrem = min(l2, w2);
	l2 = max(l2, w2);
	w2 = vrem;

	vrem = min(lc, wc);
	lc = max(lc, wc);
	wc = vrem;
	
	if (l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc) {
		if (h1 > hc || h2 > hc) {
			printf("NO");
			ind = false;
		}
		if (ind && ind && l1 <= lc && w1 <= wc) {
			if (ind && l2 <= wc - w1 && w2 <= lc) {
				printf("YES");
				ind = false;
			}
			else if (ind && w2 <= wc - w1 && l2 <= lc) {
				printf("YES");
				ind = false;
			}
			else if (ind && l2 <= lc - l1 && w2 <= wc) {
				printf("YES");
				ind = false;
			}
			else if (ind && w2 <= lc - l1 && l2 <= wc) {
				printf("YES");
				ind = false;
			}
		}
		if (ind && w1 <= lc && l1 <= wc) {
			if (ind && l2 <= wc - l1 && w2 <= lc) {
				printf("YES");
				ind = false;
			}
			else if (ind && l2 <= lc && w2 <= wc - l1) {
				printf("YES");
				ind = false;
			}
			else if (ind && l2 <= lc - w1 && w2 <= wc) {
				printf("YES");
				ind = false;
			}
			else if (ind && w2 <= lc - w1 && l2 <= wc) {
				printf("YES");
				ind = false;
			}
		}
		if (ind && h1 + h2 <= hc && l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc) {
			printf("YES");
			ind = false;
		}
		else if (ind) {
			printf("NO");
		}
	}
	else {
		printf("NO");
	}
	return 0;
}