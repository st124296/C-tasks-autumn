#include<iostream> 

int main(int argc, char* argv[])
{
    int num, s, d, e;

    scanf_s("%d", &num);

    s = num / 100;
    d = num / 10;
    d = d % 10;
    e = num % 10;

    num = s + d + e;

    printf("%d", num);

    return EXIT_SUCCESS;
}