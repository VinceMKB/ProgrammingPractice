#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>
#include <cassert>

class Solution
{
    public:
        int relement(vector <int>& nums, int val);

};

int Solution::relement(vector <int>& nums, int val)
{
    int numleft = 0;

    for(int i = 0; i < nums.size(); ++i)
    {
        if(nums[i] != val)
        {
            nums[numleft] = nums[i];
            ++numleft;
        }
    }
    
    return numleft;
}

int main()
{
    vector <int> inputvec = {1,2,3,4,5,2,7};
    int inputvecSize = inputvec.size();
    int inputval = 2;
    vector <int> expectedvec = {1,3,4,5,7};

    Solution objSol;
    int k = objSol.relement(inputvec, inputval);
     cout << "The Value of inputvecSize at the start: " << inputvecSize << endl;
    cout << "The Value of K at the start: " << k << endl;

    sort(inputvec.begin(), inputvec.begin() + k);

    assert(k == expectedvec.size());

    for(int i = 0; i < k; ++i)
    {
        assert(inputvec[i] == expectedvec[i]);
        cout << "The Value of i at the start: " << i << endl;
    }
    cout << "The Value of K at the end: " << k << endl;

}