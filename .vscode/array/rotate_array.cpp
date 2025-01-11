#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size(); // Number of rows (square matrix, so m = n)

        // Transpose the matrix
        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) { // Start j from i + 1 to avoid re-swapping
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < m; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main() {
    // Example usage
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution sol;
    sol.rotate(matrix);

    // Print rotated matrix
    cout << "Rotated Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
