#include <cstdio>

int main(int argc, char* argv[])
{
    int a[1001] = { 0 };
    int n = 0;
    int l = 0;
    int r = 0;
    int k = 0;

    scanf_s("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        scanf_s("%d", &a[i]);
    }

    scanf_s("%d %d", &l, &r);

    k = l;

    for (int i = l + 1; i <= r; ++i)
    {
        if (a[i] > a[k])
        {
            k = i;
        }
    }

    printf("%d %d\n", a[k], k);

    return 0;
}