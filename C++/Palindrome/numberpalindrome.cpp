#include <iostream>
using namespace std;

class Solution
{
    public:
        void isPalindrome(const int& x);

};

void Solution::isPalindrome(const int& x)
{
    string sizeint = to_string(x);
    string fwdint = to_string(x);
    string bwdint;

    for(int i = sizeint.length()-1; i >= 0; --i)
    {
        bwdint += sizeint[i];
    }

    cout << "This is the INT: " << fwdint << endl;
    cout << "This is the INT backwards: " << bwdint << endl;

    if(fwdint == bwdint)
    {
        cout << "The INT is a palindrome: " << fwdint << endl ;
    }
    else if(fwdint != bwdint)
    {
        cout<< "This INT is not a palindrome: "<< bwdint << endl;
    }
}

int main()
{
    
    int inputint = 125921;

    Solution objSol;
    objSol.isPalindrome(inputint);
    cout << "Hello World" << endl;
}