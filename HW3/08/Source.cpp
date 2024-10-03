#include <cstdio>

int main(int argc, char* argv[])
{
    int i = 0;
    int j = 0;
    int f0 = 0;
    int f1 = 1;
    int f = 0;

    scanf_s("%d %d", &i, &j);

    int a = i;
    int b = j;
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
    for (i = nod; i > 0; --i)
    {
        f = (f0 + f1) % 1000000000;
        f0 = f1;
        f1 = f;
    }

    printf("%d", f0);

    return 0;
}