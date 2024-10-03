#include <cstdio>

int main(int argc, char* argv[]) {
    int n = 0;
    int v = 0;
    int s = 0;
    int i = 0;

    int v_res = 0;
    int res = -1;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        scanf("%d %d", &v, &s);
        if (s == 1)
        {
            if (v > v_res)
            {
                v_res = v;
                res = i;
            }
        }
    }

    printf("%d\n", res);

    return 0;
}