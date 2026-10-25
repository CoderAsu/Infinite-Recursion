#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};

    int currentSum = 0, maxSum = INT_MIN;

    for(int i: nums){
        currentSum += i;
        maxSum = max(currentSum, maxSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }

    cout << "Max subarray sum = " << maxSum << endl;

    return 0;
}