#include <cstdio>

int main(int argc, char* argv[]) {

    int k = 0;
    int w = 0;

    int a1 = 0;
    int b1 = 0;
    int a2 = 0;
    int b2 = 0;
    int a3 = 0;
    int b3 = 0;

    scanf("%d %d", &k, &w);
    scanf("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3);

    if (k <= b1 && a1 <= w) {
        printf("YES");
        return 0;
    }
    if (k <= b2 && a2 <= w) {
        printf("YES");
        return 0;
    }
    if (k <= b3 && a3 <= w) {
        printf("YES");
        return 0;
    }
    if (k <= b1 + b2 && a1 + a2 <= w) {
        printf("YES");
        return 0;
    }
    if (k <= b1 + b3 && a1 + a3 <= w) {
        printf("YES");
        return 0;
    }
    if (k <= b2 + b3 && a2 + a3 <= w) {
        printf("YES");
        return 0;
    }
    if (k <= b1 + b2 + b3 && a1 + a2 + a3 <= w) {
        printf("YES");
        return 0;
    }

    printf("NO");
    return 0;
}