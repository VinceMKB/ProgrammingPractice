#include <iostream>
using namespace std;
#include <vector>
class Solution
{
    public:
        int single_number(vector<int>& nums)
        {
            int unique_number = 0;
            for(int num : nums)
            {
                unique_number ^= num;
            }

            return unique_number;
        }
};

int main()
{
    Solution ObjSol;

    vector<int> numbers = {4, 4, 6, 8, 8};

    int result = ObjSol.single_number(numbers);

    cout<<"The result number is: " << result << endl;
    cout<<"This SingleNumber file is working!" << endl;
    
    return 0;
}