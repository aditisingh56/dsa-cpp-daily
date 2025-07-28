#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;

    for (int row = 0; row < numRows; row++) {
        vector<int> currentRow(row + 1, 1); // initialize row with 1s

        for (int col = 1; col < row; col++) {
            currentRow[col] = triangle[row - 1][col - 1] + triangle[row - 1][col];
        }

        triangle.push_back(currentRow);
    }

    return triangle;
}

int main() {
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
