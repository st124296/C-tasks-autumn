#include <cstdio>

int main(int argc, char* argv[])
{
    long long int a = 0;
    long long int b = 0;
    long long int c = 0;
    long long int d = 0;
    int z = 0;

    scanf_s("%lld %lld %lld %lld", &a, &b, &c, &d);

    for (z = -100; z <= 100; ++z)
    {
        if (a * z * z * z + b * z * z + c * z + d == 0)
        {
            printf("%d ", z);
        }
    }
    return 0;
}