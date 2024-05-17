#include <iostream>
using namespace std;

#include<vector>
#include<string>

class Solution
{
    public:
        string convert(string s, int rows)
        {
            if(rows <= 1)
            {
                return s;
            }

            vector<string>new_string(rows, "");

            int j = 0;
            int direction = -1;

            for(int i = 0; i < s.length(); i++)
            {
                if(j== rows -1|| j == 0)
                {
                    direction *= -1;
                }
                new_string[j] += s[i];
                if(direction == 1)
                {
                    j++;
                }
                else
                {
                    j--;
                }
            }

            string answer;
            for(auto &it : new_string)
            {
                answer += it;
            }

            return answer;
        }


};

int main()
{
    Solution objSol;
    string s = "PAYPALISHIRING";
    string expectedOutput = "PAHNAPLSIIGYIR";
    int numRows = 3;

    cout << "This is the output string: " << objSol.convert(s, numRows) << endl;

    cout << "ZigZagConversion" << endl;

    return 0;
}