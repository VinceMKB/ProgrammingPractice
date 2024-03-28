#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

typedef vector <vector <int>> Triangle;

Triangle generateTriangle(int m_rows)
{
    Triangle tri;
    for(int i = 0; i < m_rows; ++i)
    {
        vector<int> rows;
        for(int j = 0; j <= i; ++j)
        {
            if(j==0 || j==i)
            {
                rows.push_back(1);
            }
            else
            {
                rows.push_back(tri[i-1][j-1] + tri[i-1][j]);
            }
        }
        tri.push_back(rows);
    }
    return tri;   
}

void displayTriangle(const Triangle &t, int width)
{
    for(const auto &rows: t)
    {
        for(int val : rows)
        {
            cout << setw(width) << val;
        }
        cout << endl;
    }
}


int main()
{
    int numRows = 7;
    Triangle m_tri = generateTriangle(numRows);
    displayTriangle(m_tri, 10);
    return 0;
}