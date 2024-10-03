#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> map;
    map[1] = 10;
    map[2] = 20;
    map[3] = 30;
    for (auto it : map)
    {
        cout << it.first << " " << it.second << endl;
    }
}