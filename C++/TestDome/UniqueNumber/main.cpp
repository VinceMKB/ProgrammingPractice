#include <iostream>
using namespace std;

#include <vector>
#include <unordered_map>

vector <int> findUniqueNumbers(const vector<int> & numbers)
{
    unordered_map<int, int> counts;
    for(int num : numbers)
    {
        ++counts[num];
    }

    vector<int> uniqueNumbers;
    for(const auto& kv : counts)
    {
        if(kv.second == 1)
        {
            uniqueNumbers.push_back(kv.first);
        }
    }

    return uniqueNumbers;
}

int main()
{

    vector<int> numbers = {1, 2, 1, 3, 4, 5, 3, 4};
    vector<int> unique = findUniqueNumbers(numbers);

    cout << "The unique number is: " ;
    for (int num : unique) 
    {
        cout << num << "," << ' ';

    }
    cout << endl;

    cout << "UniqueNumber is working!" <<  endl;

    return 0;

}