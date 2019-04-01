#include "../../include/geonode.h"
#include <iostream>

using namespace std;

namespace geonode
{
    vector<vector<int> > generateMatrix(int x, int y) 
    {
        int count = 0;
        vector<int> row(x,0);
        vector<vector<int> > matrix;

        while(count < y) {
            matrix.push_back(row);
            count++;
        }

        return matrix;
    }

    void printMatrix(vector<vector<int> > matrix)
    {
        for(auto m : matrix) {
            for(auto r : m) {
                cout << "-" << r << "-";
            }
            cout << " " << endl;
        }
    }
}