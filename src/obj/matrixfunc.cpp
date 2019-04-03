#include "../../include/geonode.h"

using namespace std;

namespace geonode
{
    void generateMatrix(int x, int y, vector<vector<int> > *matrix) 
    {
        int count = 0;
        vector<int> row(x,0);

        while(count < y) {
            matrix->push_back(row);
            count++;
        }
    }

    void populateMatrix(vector<vector<string> > coordinates, vector<vector<int> > *matrix)
    {
        for(auto c : coordinates) {
            int x = stoi(c.at(0));
            int y = stoi(c.at(1));
            vector<int> *inner = &matrix->at(x);
            inner->at(y) = 1;
        }
    }

    void printMatrix(vector<vector<int> > *matrix)
    {
        for(auto m : *matrix) {
            for(auto r : m) {
                cout << " " << r << " ";
            }
            cout << "\n";
            cout << " " << endl;
        }
    }
}