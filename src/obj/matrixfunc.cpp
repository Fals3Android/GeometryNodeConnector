#include "../../include/geonode.h"

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

    //TODO: should be passing matrix by reference here but some strange errors pop up, need to fix
    vector<vector<int> > populateMatrix(vector<vector<string> > coordinates, vector<vector<int> > matrix)
    {
        for(auto c : coordinates) {
            int x = stoi(c.at(0));
            int y = stoi(c.at(1));
            //TODO: this is not modifying the matrix accurately 
            matrix[x][y] = 1;
        }

        return matrix;
    }

    //TODO: modify print matrix to be easier to read
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