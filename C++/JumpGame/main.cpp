#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    public:
        bool canJump(vector<int>& nums)
        {
            int max_reachable = 0;
            for(int i = 0; i < nums.size(); ++i)
            {
                if(i > max_reachable)
                {
                    return false;
                }
                max_reachable = max(max_reachable, i + nums[i]);
            }
            return true;
        }
};

int main()
{   
    Solution solution;
    vector <int> in_array = { 2, 3, 1, 1, 4 };
    bool result = solution.canJump(in_array);
    cout <<"Can jump to the last index: " << (result ? "True" : "False") << endl;

    return 0;
}