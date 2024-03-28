#include <iostream>
using namespace std;

#include <vector>

class vectorSum
{
    public:
        vector <int> twoSum(vector<int> &nums, int target);

};

vector<int> vectorSum::twoSum(vector<int> &nums, int target)
{
    for(int i = 0; i < nums.size()-1; ++i)
    {
        for(int j = i + 1; j < nums.size(); ++j)
        {
            if(nums[i] + nums[j] == target)
            {
                return{i,j};
            }
        }
    }
    return{};
}

int main()
{
    vectorSum objVSum;
    vector <int> inputVecnum = {1,2,3,4,5};
    int inputTarget = 9;


    vector<int> result = objVSum.twoSum(inputVecnum, inputTarget);

    if(!result.empty())
    {
        cout << "First Value is: " << inputVecnum[result[0]] << endl;
        cout << "First Index is: " << result[0] << endl;
        cout << "Second Value is: " << inputVecnum[result[1]] << endl;
        cout << "Second Index is: " << result[1] << endl;
    }
    else
    {
        cout << "Something went Wrong!!"<< endl;
    }
}