#include <iostream>
#include <vector>
#include "Cell.h"


int main()
{
    int n, r, c;
    std::cin >> n >> r >> c;

    // Create constants to store the size of the maze
    const int ROW = n;
    const int COL = n;

    // Create a container of unvisited cells
    std::vector< Cell > UNVISITED;

    // Create a stack of cell objects named path
    std::vector< Cell > PATH;

    // Create a container of visited cells
    std::vector< Cell > VISITED;
 

    return 0;
}
