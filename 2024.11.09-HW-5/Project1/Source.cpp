#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a[100000] = { 0 };
	int i = 0;
	int n = 0;
	int k = 0;
	
	cin >> n;

	for (i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cin >> k;

	if (k > 0)
	{
		k %= n;
	}
	else
	{
		k = n - ((-k) % n);
	}
	for (i = n - k; i < n; ++i)
	{
		cout << a[i] << ' ';
	}

	for (i = 0; i < n - k; ++i)
	{
		cout << a[i] << ' ';
	}
	return 0;
}