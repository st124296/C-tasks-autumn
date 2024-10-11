#include <cstdio>

int main(int argc, char* argv[])
{
    int a[1000] = { 0 };
    int i = 0;
    int n = 0; 
    int k = 0;
    int m = 0;

    scanf_s("%d", &n);

    for (i = 0; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
    }

    scanf_s("%d", &k);

    for (i = 0; i < n; ++i)
    {
        if (a[i] >= k)
        {
            ++m;
        }
    }

    printf("%d\n", m + 1);

    return 0;
}