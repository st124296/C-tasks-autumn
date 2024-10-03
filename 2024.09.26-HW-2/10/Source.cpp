#include <cstdio>

int main(int argc, char* argv[]) {
    int n = 0;
    int c5 = 0;
    int c3 = 0;
    scanf_s("%d", &n);
    if (n % 5 == 0) {
        c5 = n / 5;
    }

    // так выглядит отчаяние 

    else if ((n - 3) % 5 == 0) {
        c5 = (n - 3) / 5;
        c3 = 1;
    }

    else if ((n - 6) % 5 == 0) {
        c5 = (n - 6) / 5;
        c3 = 2;
    }

    else if ((n - 9) % 5 == 0) {
        c5 = (n - 9) / 5;
        c3 = 3;
    }

    else if ((n - 12) % 5 == 0) {
        c5 = (n - 12) / 5;
        c3 = 4;
    }

    else if ((n - 15) % 5 == 0) {
        c5 = (n - 15) / 5;
        c3 = 5;
    }

    else if ((n - 18) % 5 == 0) {
        c5 = (n - 18) / 5;
        c3 = 6;
    }

    else if ((n - 21) % 5 == 0) {
        c5 = (n - 21) / 5;
        c3 = 7;
    }

    else if ((n - 24) % 5 == 0) {
        c5 = (n - 24) / 5;
        c3 = 8;
    }

    else if ((n - 27) % 5 == 0) {
        c5 = (n - 27) / 5;
        c3 = 9;
    }

    else if ((n - 30) % 5 == 0) {
        c5 = (n - 30) / 5;
        c3 = 10;
    }

    printf("%d %d", c5, c3);
    return 0;
}