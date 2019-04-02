#include <string>
#include <vector>
#include <iostream>

namespace geonode
{
    std::vector<std::vector<int> > generateMatrix(int x, int y);
    std::vector<std::vector<int> > populateMatrix(std::vector<std::vector<std::string> > coordinates,std::vector<std::vector<int> > matrix);
    void printMatrix(std::vector<std::vector<int> > matrix);
}