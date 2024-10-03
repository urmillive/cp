#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 240, 3, 40, 50};
    for (int i : arr)
    {
        cout << i << endl;
    }

    int arr2[5] = {10, 240, 3, 40, 50};
    for (int i : arr2)
    {
        cout << i << endl;
    }

    int n = 10;

    int arr3[n];
    arr3[0] = 10;
    for (int i = 1; i < n; i++)
    {
        arr3[i] = i * 100;
    }
    for (int i : arr3)
    {
        cout << i << endl;
    }
}
