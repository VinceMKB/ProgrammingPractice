#include <iostream>
#include <vector>
#include <iomanip>

typedef std::vector<std::vector<int>> Matrix;

Matrix PascalTriangle(int n) {
    Matrix mat;
    for (int i = 0; i < n; ++i) {
        std::vector<int> row;
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i) {
                row.push_back(1);
            } else {
                row.push_back(mat[i-1][j-1] + mat[i-1][j]);
            }
        }
        mat.push_back(row);
    }
    return mat;
}

void PrintMatrix(const Matrix& m, int width) {
    for (const auto& row : m) {
        for (int val : row) {
            std::cout << std::setw(width) << val;
        }
        std::cout << std::endl;
    }
}

int main() {
    int numRows = 7; // Example: Generate Pascal's Triangle with 7 rows
    Matrix m = PascalTriangle(numRows);
    PrintMatrix(m, 10); // Print each value with a width of 10
    return 0;
}