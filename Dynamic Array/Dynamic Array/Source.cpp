#include <iostream>

using namespace std;

int* add_end(int* arr, int& n, int x) 
{
    int* new_arr = new int[n + 1];
    for (int i = 0; i < n; ++i)
    {
        new_arr[i] = arr[i];
    }
    new_arr[n] = x;
    delete[] arr;
    ++n;
    return new_arr;
}

int* add_beginning(int* arr, int& n, int x)
{
    int* new_arr = new int[n + 1];
    for (int i = 0; i < n; ++i)
    {
        new_arr[i + 1] = arr[i];
    }
    new_arr[0] = x;
    delete[] arr;
    ++n;
    return new_arr;
}

int* delete_end(int* arr, int& n)
{
    if (n == 0) return arr;
    int* new_arr = new int[n - 1];
    for (int i = 0; i < n - 1; ++i)
    {
        new_arr[i] = arr[i];
    }
    delete[] arr;
    --n;
    return new_arr;
}

int* delete_beginning(int* arr, int& n)
{
    if (n == 0) return arr;
    int* new_arr = new int[n - 1];
    for (int i = 0; i < n - 1; ++i)
    {
        new_arr[i] = arr[i + 1];
    }
    delete[] arr;
    --n;
    return new_arr;
}

int main()
{
    int n = 0;
    cout << "Enter the number of array elements: ";
    cin >> n;

    if (n <= 0)
    {
        cerr << "The number of elements must be greater than 0!" << endl;
        return 1;
    }

    int* arr = new int[n];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    arr = add_end(arr, n, k);
    arr = add_beginning(arr, n, k);
    arr = delete_end(arr, n);
    arr = delete_beginning(arr, n);

    cout << "The resulting array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

