#include<cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
    double a = 0;
    double b = 0;
    double c = 0;

    double x1 = 0;
    double x2 = 0;
    double d = 0;

    scanf_s("%le %le %le", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", 0);
            }
        }
        else {
            x1 = -c / b;
            printf("%d\n", 1);
            printf("%lf\n", x1);
        }
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("%d\n", 2);
        printf("%lf %lf\n", x1, x2);
    }
    else if (d == 0) {
        x1 = -b / (2 * a);
        printf("%d\n", 1);
        printf("%lf\n", x1);
    }
    else {
        printf("%d\n", 0);
    }

    return 0;
}