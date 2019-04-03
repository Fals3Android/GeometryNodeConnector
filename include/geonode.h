#include <string>
#include <vector>
#include <iostream>

namespace geonode
{
    void generateMatrix(int x, int y, std::vector<std::vector<int> > *matrix);
    void populateMatrix(std::vector<std::vector<std::string> > coordinates, std::vector<std::vector<int> > *matrix);
    void printMatrix(std::vector<std::vector<int> > *matrix);
}