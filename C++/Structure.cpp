#include <iostream>
#include <cstring>
#include <string> // Include the string library
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Student
{
    int roll;
    string name; // Use string instead of char array
    string dept; // Use string instead of char array
};

struct Card
{
    int face;
    int shape;
    int color;
};

int main()
{
    Rectangle r;
    r.length = 10;
    r.breadth = 5;
    cout << "Area of rectangle: " << r.length * r.breadth << endl;

    Student s;
    s.roll = 1;
    s.name = "Ram"; // Direct assignment is now possible
    s.dept = "CSE"; // Direct assignment is now possible
    cout << "Roll: " << s.roll << ", Name: " << s.name << ", Dept: " << s.dept << endl;

    struct Card deck[52] =
        {
            {1, 0, 0},
            {2, 0, 0},
            {1, 1, 0},
            // Add more elements here
        };

    for (int i = 0; i < 52; i++)
    {
        printf("Card %d: %d %d %d\n", i, deck[i].face, deck[i].shape, deck[i].color);
    }

    printf("Card: %d %d %d\n", deck[0].face, deck[0].shape, deck[0].color);
    return 0;
}