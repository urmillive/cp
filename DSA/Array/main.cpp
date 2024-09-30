#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Create a vector array
    vector<int> numbers;

    // Add some values to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Print the values in the vector
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}