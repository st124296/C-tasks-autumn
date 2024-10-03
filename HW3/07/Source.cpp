#include <cstdio>

int main(int argc, char* argv[])
{
    long n = 0;
    long m = 0;

    scanf_s("%d %d", &n, &m);

    long a = n;
    long b = m;
    int nod = 0;

    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }

    nod = a + b;

    printf("%d", n / nod);

    return 0;
}