#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        vector <int> pairSum(vector <int> &nums, int target){
            int i, j;

            vector <int> ans;

            for(int i = 0; i < nums.size(); i++){
                for(int j = i+1; j < nums.size(); j++){
                    if(nums[i] + nums[j] == target){
                        ans.push_back(nums[i]);
                        ans.push_back(nums.at(j));
                        return ans;
                    }
                }
            }

            return ans;
        }
};

int main(){

    int n;

    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    Solution s;

    int target;

    cout << "Enter the sum of two values to search: ";
    cin >> target;

    vector <int> result = s.pairSum(vec, target);

    cout << result[0] << ", " << result[1] << endl;
    return 0;
}

// Here we got the time complexity i.e O(n^2)
// Now we will use better approach