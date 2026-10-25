#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        vector <int> pairSum(vector <int> &nums, int target){
            int n = nums.size();
            vector <int> ans;
            int i = 0, j = n - 1;

            while(i < j){
                int pairSum = nums[i] + nums[j];
                if(pairSum == target){
                    ans.push_back(nums.at(i));
                    ans.push_back(nums.at(j));
                    return ans;
                } else if(pairSum < target){
                    i++;
                } else {
                    j--;
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

