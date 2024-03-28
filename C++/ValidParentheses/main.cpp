#include <iostream>
using namespace std;

#include <stack>
#include <string>

class Solution
{
    public:
        bool isValid(const string& s);
        
};

bool Solution::isValid(const string& s)
{

    stack <char> st; 

    for(char c : s)
    {
        if(c == '(' || c == '{' ||c == '[')
        {
            st.push(c);
        }
        else if(c == ')' || c == '}' ||c == ']')
        {
            if(st.empty())
            {
                return false;
            }
            
            char top = st.top();

            if((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '['))
            {
                return false;
            }
            
            st.pop();

        }
    }
    
   return st.empty(); 
}

int main()
{
    Solution objSol;
    string pstr = "({{[]}})" ;
    cout << pstr << endl;
    bool validparatheses = objSol.isValid(pstr);
    cout << "This string is : " << (validparatheses ? "Valid" : "Invalid") <<endl;
}