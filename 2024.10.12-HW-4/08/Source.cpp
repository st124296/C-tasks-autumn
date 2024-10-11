#include <cstdio> 

int main(int argc, char* argv[])
{
    int a[1000] = { 0 };
    int i = 0;
    int n = 0;
    int k = 0;
    int l = 0;
    int r = 0;

    scanf_s("%d", &n);

    for (i = 0; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
    }

    scanf_s("%d", &k);

    while (k)
    {
        --k;
        scanf_s("%d %d", &l, &r);

        for (i = l - 1; i < r; ++i)
        {
            printf("%d ", a[i]);
        }

        printf("\n");
    }

    return 0;
}
