#include "../../include/geonode.h"
#include <iostream>

using namespace std;

int main() 
{
    int xAxis;
    int yAxis;
    cout << "Enter the dimensions of your plane" << endl;
    cout << "X Axis: ";
    cin >> xAxis;
    cout << "Y Axis: ";
    cin >> yAxis;

    geonode::generateMatrix(xAxis, yAxis);
    return 0;
}
