#include <iostream>
using namespace std;

#include <cmath>

class Solution
{
    public:
        int squareRoot(const int& num);
};

int Solution::squareRoot(const int& num)
{
    int outval = sqrt(num);

    return outval;      
}

int main()
{
    int inputval = 25;

    Solution objSol;

    int outputval = objSol.squareRoot(inputval);

    cout << "The is square root of " << inputval << " is " << outputval << endl;

    cout << "Hello World!" << endl;

}