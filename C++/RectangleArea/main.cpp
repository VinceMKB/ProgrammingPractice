#include <iostream>
using namespace std;

#include <math.h>

class Solution
{
    public:
        int computeArea(int RectA_x1, int RectA_y1, int RectA_x2, int RectA_y2,  int RectB_x1, int RectB_y1, int RectB_x2, int RectB_y2)
        {
            // Calculate the area of each rectangle
            int area_A = abs(RectA_x2 - RectA_x1) * abs(RectA_y2 - RectA_y1);
            int area_B = abs(RectB_x2 - RectB_x1) * abs(RectB_y2 - RectB_y1);

            int inter_x1 = max(RectA_x1, RectB_x1);
            int inter_y1 = max(RectA_y1, RectB_y1);
            int inter_x2 = min(RectA_x2, RectB_x2);
            int inter_y2 = min(RectA_y2, RectB_y2);
            
            int inter_area;
            if(inter_x1 < inter_x2 && inter_y1 < inter_y2)
            {
                inter_area = abs(inter_x2 - inter_x1) * abs(inter_y2 - inter_y1);
            }
            else
            {
                inter_area = 0;
            }

            int total_area = area_A + area_B - inter_area;

            return total_area;
        }

};

int main()
{
    Solution objSol = Solution();
    int result = objSol.computeArea(-3, 0, 3, 4, 0, -1, 9, 2);
    cout << "The area is: " << result << endl;

    return 0;
}