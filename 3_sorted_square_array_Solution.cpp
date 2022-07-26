#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// O(n) time
// O(n) space - where n is the length of the input array

vector<int> sortedSquaredArray(vector<int> array) {

    vector<int> sortedSquares(array.size(), 0);
    int smallerValueIdx = 0;
    int largerValueIdx = array.size() - 1;

    for(int idx = array.size() - 1; idx >= 0; idx--) {
        int smallerValue = array[smallerValueIdx];
        int largerValue = array[largerValueIdx];

        if(abs(smallerValue) > abs(largerValue)) {
            sortedSquares[idx] = smallerValue * smallerValue;
            smallerValueIdx++;
        }
        else {
            sortedSquares[idx] = largerValue * largerValue;
            largerValueIdx--;
        }

    } // for

    return sortedSquares;
} // sortedSquaredArray
