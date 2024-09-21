#include<iostream> 

int main(int argc, char* argv[])
{
    int v, t;
    const int s = 109;

    scanf_s("%d %d", &v, &t);

    int stop = v * t % s;
    stop = (s + stop) % s;
    
    printf("%d", stop+1);

	return EXIT_SUCCESS;
}