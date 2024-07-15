#include <iostream>
using namespace std;

// total surface area of cube
int area (int l = 10)
{
    return 6*l*l;
}

// area of circle
const float PI = 3.14;
float area (float r)
{
    return PI*r*r;
}

// area of rectangle
float area (float l, float b)
{
    return l*b;
}

int main (void)
{
    // for cube
    int cubeLength, cubeArea;
    cout << "enter the length of the cube: ";
    cin >> cubeLength;
    cubeArea = area(cubeLength);
    cout << "the area of cube is: " << cubeArea <<endl;
    
    // for circle
    float circleRadius, circleArea;
    cout << "enter the radius of the circle: ";
    cin >> circleRadius;
    circleArea = area(circleRadius);
    cout << "the area of circle is: " << circleArea <<endl;   

    // for rectangle
    float rectangleLength, rectangleBreadth, rectangleArea;
    cout << "enter the length of the rectangle: ";
    cin >> rectangleLength;
    cout << "enter the breadth of the rectangle: ";
    cin >> rectangleBreadth;
    rectangleArea = area(rectangleLength, rectangleBreadth);
    cout << "the area of rectangle is: " << rectangleArea <<endl;   

}