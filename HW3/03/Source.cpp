#include <cstdio>

int main(int argc, char* argv[]) {
    int n = 0;
    int h = 0;
    int k = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n && k == 0; ++i)
    {
        scanf("%d", &h);
        if (h <= 437) {
            k = i;
        }
    }

    if (k == 0)
    {
        printf("No crash\n");
    }
    else
    {
        printf("Crash %d\n", k);
    }

    return 0;
}

