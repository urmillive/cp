#include <iostream>
#include <vector>
using namespace std;

class test
{
public:
    void hello()
    {
        cout << "hello word!" << endl;
    }
    int findMax(const vector<int> &arr)
    {
        int max = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
};

int main()
{
    test t = test();
    t.hello();
    vector<int> arr;
    int values[] = {10, 240, 3, 40, 50};
    arr.assign(values, values);
    cout << "ARR" << arr[1] << endl;
    int max = t.findMax(arr);
    cout << "MAX: " << max << endl;
}
