#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    public:
        vector<vector<int>> threeSum(vector<int>& nums)
        {
            sort(nums.begin(), nums.end());
            int target = 0;
            int n = nums.size();
            vector<vector<int>> result;

            for(int i = 0; i < n - 2; ++i)
            {
                if(i > 0 && nums[i] == nums[i - 1])
                {
                    continue;
                }
                
                int left = i + 1;
                int right = n - 1;

                while(left < right)
                {
                    int current_sum = nums[i] + nums[left] +  nums[right];
                    if(current_sum == target)
                    {
                        result.push_back({nums[i], nums[left], nums[right]});

                        while(left < right && nums[left] == nums[left + 1])
                        {
                            left++;
                        }
                        while(left < right && nums[right] == nums[right - 1])
                        {
                            right--;
                        }
                        ++left;
                        --right;
                    }
                    else if(current_sum < target)
                    {
                        ++left;
                    }
                    else
                    {
                        --right;
                    }
                }
            }
            return result;
        }
};

int main()
{
    Solution objSol;
    vector<int> in_array = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = objSol.threeSum(in_array);

    for(const auto& triplet : result)
    {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }

    return 0;
}