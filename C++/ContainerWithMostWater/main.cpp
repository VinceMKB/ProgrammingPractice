#include <iostream>
using namespace std;

#include <vector>

class Solution
{
    public:
        int maxArea(vector<int>& height)
        {
            int maxArea = 0;
            int left = 0;
            int right = height.size() - 1;

            while(left < right)
            {
                int currentArea = min(height[left], height[right]) * (right - left);
                maxArea = max(maxArea, currentArea);

                if(height[left] < height[right])
                {
                    left++;
                }
                else
                {
                    right--;
                }
                
            }
            return maxArea;
        }
};

int main()
{
    Solution objSol = Solution();
    vector<int> in_array = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = objSol.maxArea(in_array);
    cout << "The total area is: " << result << endl;

    in_array = {1, 1};
    result = objSol.maxArea(in_array);
    cout << "The total area is: " << result << endl;

    return 0;
}