#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = INT_MIN;

    for(int st = 0; st < nums.size(); st++){
        
        int currentSum = 0;
        for(int end = st; end < nums.size(); end++){
            currentSum += nums[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "Max subarray sum = " << maxSum << endl;

    return 0;
}

// This approach gives the time complexity O(n^2)
// so we will go for next approach i.e kadane's algorithm