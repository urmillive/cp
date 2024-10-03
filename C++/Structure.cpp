#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 5;
    printf("Area of rectangle: %d", r.length * r.breadth);
    return 0;
}