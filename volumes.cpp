#include <iostream>
using namespace std;
float vol(int);
float vol(float, int);
float vol(int, int, float);

int main()
{
    int a, h, l, b;
    float r, H;

    cout << "enter the value for the cube a:";
    cin >> a;

    cout << "enter the value for the cylinder:";
    cin >> h;
    cin >> r;

    cout << "enter the value for the rectangular box:";
    cin >> l;
    cin >> b;
    cin >> h;

    cout << " \n volume of cube is " << vol(a);
    cout << " \n volume of cylinder is " << vol(r, h);
    cout << " \n volume of rectangular box is " << vol(l, b, h);

    return 0;
}

float vol(int a)
{
    return (a * a * a);
}

float vol(float r, int h)
{
    return (3.14 * r * r * h);
}

float vol(int l, int b, float h)
{
    return (l * b * h);
}