#include <cstdio>

int main(int argc, char* argv[])
{
    int a[1000] = { 0 };
    int n = 0;
    int x = 0;
    int y = 0;

    scanf_s("%d", &n);

    scanf_s("%d", &a[0]);

    x = a[0];
    y = a[0];

    for (int i = 1; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
        if (a[i] > x)
        {
            x = a[i];
        }
        else if (a[i] < y)
        {
            y = a[i];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == x)
        {
            a[i] = y;
        }
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}