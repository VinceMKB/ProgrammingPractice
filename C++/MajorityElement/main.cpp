#include <iostream>
using namespace std;

#include <vector>
#include <map>
#include <algorithm>

class Solution
{
    public:
        int majorityElement(const vector<int>& nums)
        {
            map<int, int> countMap;
            
            for(int number : nums)
            {
                countMap[number]++;
            }

            auto maxElement = max_element(countMap.begin(), countMap.end(),[](const auto& a, const auto& b){return a.second < b.second;});

            return maxElement -> first;
        }

};

int main()
{
    vector <int> invec = {3,2,3,4,3,4,5,6,4,3,4,4,4,4,5};
    Solution  objSol;

    int majoritynum = objSol.majorityElement(invec);

    cout << "Most common number is: " << majoritynum << endl;

    return 0;
}