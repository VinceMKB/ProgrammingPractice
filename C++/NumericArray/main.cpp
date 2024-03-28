#include <iostream>
#include <string>
#include <vector>
using namespace std;

class numericVector
{
    public:
        void insert_to_Vector();
        int sells_of_Vector(vector <int> &vec_s);
};

void numericVector::insert_to_Vector()
{
    vector<int> prices;
    int num;
    for(int i = 0; i <= 5; ++i)
    {
        cout << "Enter a number: ";
        cin >> num;
        prices.push_back(num);
    }

    for(auto it = prices.begin(); it != prices.end(); ++it)
    {
        cout << *it << endl;
    }
    sells_of_Vector(prices);
}

int numericVector::sells_of_Vector(vector <int> &vec_s)
{
    int smallestValue = INT_MAX; // Initialize to the largest possible int
    int largestValueAfterSmallest = INT_MIN; // Initialize to the smallest possible int
    int smallestIndex = -1; // To keep track of the index of the smallest value
    int largestIndexAfterSmallest = -1; // To keep track of the index of the largest value after the smallest

    for (int i = 0; i < vec_s.size(); ++i) 
    {
        if (vec_s[i] < smallestValue) 
        {
            smallestValue = vec_s[i];
            smallestIndex = i;
        }
    }

    // Start searching for the largest value from the day after the smallest value was found
    for (int i = smallestIndex + 1; i < vec_s.size(); ++i) 
    {
        if (vec_s[i] > largestValueAfterSmallest) 
        {
            largestValueAfterSmallest = vec_s[i];
            largestIndexAfterSmallest = i;
        }
    }

    // Assuming you want to calculate profit, which is the difference between the largest value after the smallest and the smallest value itself
    int profit = largestValueAfterSmallest - smallestValue;

    // Output the values for demonstration
    cout << "Smallest value: " << smallestValue << " (found at index: " << smallestIndex << ")" << endl;
    cout << "Largest value after the smallest: " << largestValueAfterSmallest << " (found at index: " << largestIndexAfterSmallest << ")" << endl;
    cout << "Profit: " << profit << endl;

    return profit;
}

int main()
{
    numericVector objVec;
    objVec.insert_to_Vector();  
}