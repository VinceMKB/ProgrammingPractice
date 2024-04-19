#include <vector>
#include <stdexcept>
#include <iostream>
using namespace std;

int countNumbers(const std::vector<int>& sortedVector, int lessThan)
{
    auto it = lower_bound(sortedVector.begin(), sortedVector.end(), lessThan);

    int index = distance(sortedVector.begin(), it);

    return index;
}

#ifndef RunTests
int main()
{
    std::vector<int> v { 1, 3, 5, 7 };
    std::cout << countNumbers(v, 4);
}
#endif
