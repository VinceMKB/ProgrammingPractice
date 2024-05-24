#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

class Solution
{
    public:
        int threeSumClosest(vector<int>& nums, int target)
        {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            int closest_sum = numeric_limits<int>::max();

            for(int i = 0; i < n - 2; ++i)
            {
                int left = i + 1;
                int right = n - 1;

                while(left < right)
                {
                    int current_sum = nums[i] + nums[left] + nums[right];
                    if(abs(current_sum - target)< abs(closest_sum - target))
                    {
                        closest_sum = current_sum;
                    }

                    if(current_sum < target)
                    {
                        ++left;
                    }
                    else if(current_sum > target)
                    {
                        --right;
                    }
                    else
                    {
                        return current_sum;
                    }
                }
            }
            return closest_sum;
        }
};

int main()
{
    Solution objSol;
    vector<int> in_array = {-1, 2, 1, -4};
    int target = 1;
    int result = objSol.threeSumClosest(in_array, target);
    cout << "Closest num is: " << result << endl;

    return 0;
}