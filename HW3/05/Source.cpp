#include<cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    int n1 = 0;
    int a = 0;
    long sum = 0;
    int m = 0;

    scanf_s("%d", &n1);
    for (n = 1; n <= n1; ++n)
        for (m = 1; m <= n1; m++)
        {
            scanf_s("%d", &a);
            if (a == 1) sum++;
        }
    printf("%d", sum / 2);
    return 0;
}