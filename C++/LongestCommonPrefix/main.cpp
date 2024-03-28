#include <iostream>
using namespace std;

#include <vector>
#include <string>

class Solution
{
    public:
        string lgcommonPrefix(vector<string>& strs);
};

string Solution::lgcommonPrefix(vector<string>& strs)
{
    string prestr = strs[0];
    
    for( const auto& loopstrs : strs)
    {
        for(size_t i = 0; i < prestr.size(); ++i)
        {
            if(i >= loopstrs.size() || loopstrs[i] != prestr[i])
            {
                prestr = prestr.substr(0,i);
                break;
            }
        }
        if(prestr.empty())
        {
            return "";
        }
    }


    return prestr;
}

int main()
{
    Solution objSol;
    vector <string> inputstr = {"stay", "stare", "stair"};
    string strsolution = objSol.lgcommonPrefix(inputstr);
    cout << "The prefix is: " << strsolution << endl;   
}