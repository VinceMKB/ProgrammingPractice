#include <iostream>
using namespace std;

#include <vector>

class Solution
{
    public:
        int reverse(int x)
        {
            if(x == 0)
            {
                return 0;
            }
            
            string size_int = to_string(x);
            string bwdint;

            for(int i = size_int.length()-1; i >= 0; --i)
            {
                bwdint += size_int[i];
            } 

            long long overflowCheck = stoll(bwdint);
            if(overflowCheck > INT_MAX || overflowCheck < INT_MIN)
            {
                return 0;
            }

            int answer = stoi(bwdint);

            if(x < 0)
            {
                answer = answer * -1;
            }


            return answer;
        }
};

int main()
{  
    Solution objSol;
    int number = -210;
    cout << "The number reversed is: " << objSol.reverse(number) << endl;
    
    return 0;
}