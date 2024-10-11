#include <cstdio> 

int main(int argc, char* argv[])
{
    int n = 0;
    int a = 0;
    int natur[1000] = { 0 };
    int top = -1;


    scanf_s("%d", &n);

    while (n)
    {
        --n;
        scanf_s("%d", &a);
        natur[++top] = a; 
    }

    while (top >= 0) {
        printf("%d ", natur[top]);
        --top;
    }

    printf("\n");

    return 0;
}