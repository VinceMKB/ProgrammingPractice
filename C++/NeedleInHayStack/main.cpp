#include <iostream>
using namespace std;

class Solution
{
    public:

    void postionofstring(const string& haystack, const string& needle);    

};

void Solution::postionofstring(const string& haystack, const string& needle)
{
    size_t postion = 0;
    int count = 0;

    while((postion = haystack.find(needle, postion)) != string::npos)
    {
        cout <<"Found \"" << needle << "\" at position " << postion << endl;
        
        postion += needle.length();
        
        count++; 
    }

    if(count == 0)
    {
        cout << "Did not find \"" << needle << "\"" << endl;
    }
}

int main()
{
    string inputhaystack = "hithisisastringthatinnedtousestring";
    string inputneedle = "string";
    
    Solution objSol;
    objSol.postionofstring(inputhaystack, inputneedle);

    cout << "Hello World" << endl;
}