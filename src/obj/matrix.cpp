#include "../../include/geonode.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    vector<int> axis;
    string data;

    ifstream graphsText ("./data/graphs.txt");

    if(graphsText.is_open()) {
        while( getline (graphsText, data) ) {
            axis.push_back(stoi(data));
        }
        graphsText.close();
    } else {
        cout << "no data directory found please add one " << endl;
    }

    int xAxis = axis.at(0);
    int yAxis = axis.at(1);

    vector<vector<int> > matrix = geonode::generateMatrix(xAxis, yAxis);
    geonode::printMatrix(matrix);

    return 0;
}
