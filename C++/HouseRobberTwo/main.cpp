#include <iostream>
using namespace std;

#include <vector>

class Solution
{
    public:
        int rob(vector<int>& nums)
        {
            int stolen_money = 0;
            for(int i = 1; i < nums.size(); i+=2)
            {
                cout << "Money in the house is:R " << nums[i] << "K" << endl;
                stolen_money = stolen_money + nums[i];
            }
            
            return stolen_money;
        }
};

int main()
{
    Solution objSol = Solution();

    vector<int> in_array = {2, 7, 9, 3, 1};
    int result = objSol.rob(in_array);
    cout << "The stolen total money is: R" << result << "K" << endl;

    return 0;
}