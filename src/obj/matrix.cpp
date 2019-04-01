#include "../../include/geonode.h"
#include <iostream>

using namespace std;

int main()
{
    int xAxis;
    int yAxis;

    cout << "Enter the dimensions of your plane" << endl;
    cout << "X Axis: " << endl;
    cin >> xAxis;
    cout << "Y Axis: " << endl;
    cin >> yAxis;

    if (cin.fail())
    {
        cout << "Please enter a number" << endl;
        return 1;
    }

    geonode::generateMatrix(xAxis, yAxis);

    return 0;
}
