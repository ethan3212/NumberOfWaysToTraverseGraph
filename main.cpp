#include <vector>
#include <iostream>
using namespace std;

int numberOfWaysToTraverseGraph(int width, int height) {
// width = 4
// height = 3
//             matrix
// [0]     [1] [2] [3] [4]
// [1]    |_1_|_1_|_1_|_1_|    (if either index is '1', there is only one possible way to get to that square)
// [2]    |_1_|_2_|_3_|_4_|    (otherwise, add the top neighbor with the left neighbor to calculate the number of ways to that cell)
// [3]    |_1_|_3_|_6_|_10| <-- return the value in this cell

    if(width == 1 || height == 1) {
        return 1;
    }
    return numberOfWaysToTraverseGraph(width - 1, height) + numberOfWaysToTraverseGraph(width, height - 1);
}

int main() {
    int width = 4;
    int height = 3;
    cout << numberOfWaysToTraverseGraph(width, height);
    return 0;
}
