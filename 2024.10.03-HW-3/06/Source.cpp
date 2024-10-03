#include <cstdio>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int nok = 1;

    int d = 0;

    scanf_s("%d %d", &a, &b);
    for (d = 2; a > 1 || b > 1; ++d)
        while (a % d == 0 || b % d == 0)
        {
            nok *= d;
            if (a % d == 0)
            {
                a /= d;
            }
            if (b % d == 0)
            {
                b /= d;
            }
        }
    printf("%d", nok);
}