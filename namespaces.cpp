#include <iostream>

using namespace std;

namespace square
{
    int number;
    int find_sqr (int num)
    {
        return num * num;
    }
};

namespace cube
{
    int number;
    int find_cube (int num)
    {
        return num * num * num;
    }
};

int main (void)
{
    square::number = 3;
    cube::number = 5;
    int square, cube;

    // finding the cube of the number stored in square namespace
    cube = cube::find_cube(square::number);
    cout << "the cube of " << square::number<< " is: "<< cube << endl;

    // finding the square of the number stored in cube namespace
    square = square::find_sqr(cube::number);
    cout << "the square of " << cube::number<< " is: "<< square << endl;
}