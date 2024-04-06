#include <iostream>
using namespace std;

#include <algorithm>

class Solution 
{
    public:
    string convertToTitle(int columnNumber) 
    {

        string label;
        while(columnNumber > 0)
        {
            
            int remainder = (columnNumber - 1) % 26;
            label.push_back('A'+ remainder);
            columnNumber = (columnNumber-1)/26;

        }

        reverse(label.begin(), label.end());

        return label;

    }

    int numColumn()
    {
        int num = 0;

        cout << "Please enter the number to be converted: " ;
        cin >> num;

        return num;
    }

};

int main()
{
    Solution objSol;
    int innumColumn = objSol.numColumn();
    string outString = objSol.convertToTitle(innumColumn);

    cout << "The Column number is: " << innumColumn << endl;
    cout << "The number Converts to: "<< outString << endl;

    string tester;
    tester.push_back('A' + 5);
    cout << "Testing Logic: " << tester << endl;

    cout << "ExcelColumn is working!" << endl;
    
    return 0;     
}