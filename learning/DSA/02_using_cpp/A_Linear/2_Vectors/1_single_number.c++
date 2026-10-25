#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int singleNumber(vector <int> &nums){
            int ans = 0;

            for(int i : nums){
                ans ^= i;
            }

            return ans;
        }
};

int main(){

    vector<int> nums = {4, 1, 2, 1, 2};

    Solution obj;

    int result = obj.singleNumber(nums);

    cout << "Single number: " << result << endl;

    return 0;
}