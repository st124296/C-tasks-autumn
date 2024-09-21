#include<iostream> 

int main(int argc, char* argv[])
{
	int num;

	scanf_s("%d", &num);

	printf("The next number for the number %d is %d.\n", num, num + 1);
	printf("The previous number for the number %d is %d.", num, num - 1);

	return EXIT_SUCCESS;
}