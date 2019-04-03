#include "../../include/geonode.h"
#include <boost/algorithm/string.hpp>
#include <fstream>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    vector<int> axis;
    vector<vector<string> > coordinates;
    string data;

    ifstream graphsText ("./data/graphs.txt");

    if(graphsText.is_open()) {

        while( getline (graphsText, data, ',') ) {
            float input = stof(data);
            if (floor(input) == input) {
                axis.push_back(input);
            } else {
                vector<string> results;
                boost::split(results, data, boost::is_any_of("."));
                coordinates.push_back(results);
            }
        }

        graphsText.close();

    } else {
        cout << "no data directory found please add one " << endl;
    }

    int xAxis = axis.at(0);
    int yAxis = axis.at(1);

    vector<vector<int> > matrix;
    
    geonode::generateMatrix(xAxis, yAxis, &matrix);
    geonode::populateMatrix(coordinates, &matrix);
    geonode::printMatrix(&matrix);

    return 0;
}
