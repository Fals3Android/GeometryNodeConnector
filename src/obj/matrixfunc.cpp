#include "../../include/geonode.h"
#include <iostream>
#include <vector>

using namespace std;

namespace geonode
{
    void generateMatrix(int x, int y) 
    {
        int count = 0;
        vector<int> row(x,0);
        vector< vector<int> > matrix;

        while(count < y) {
            matrix.push_back(row);
            count++;
        }

        for(auto m : matrix) {
            for(auto r : m) {
                cout << "-" << r << "-";
            }
            cout << " " << endl;
        }
        
    }
}