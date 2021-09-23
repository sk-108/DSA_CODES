#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{

    set<string> ans;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (ans.find("row" + i + board[i][j]) != ans.end())
            {
                return false;
            }
            if (ans.find("col" + j + board[i][j]) != ans.end())
            {
                return false;
            }
            if (ans.find("box" + (i / 3) * 3 + (j / 3) + board[i][j]) != ans.end())
            {
                return false;
            }
            if (board[i][j] != '.')
            {
                ans.insert("row" + i + board[i][j]);
                ans.insert("col" + j + board[i][j]);
                ans.insert("box" + (i / 3) * 3 + (j / 3) + board[i][j]);
            }
        }
    }
    return true;
}

int main()
{

    vector<vector<char>> vec = {
        {"5", "3", ".", ".", "7", ".", ".", ".", "."}, {"6", ".", ".", "1", "9", "5", ".", ".", "."}, {".", "9", "8", ".", ".", ".", ".", "6", "."}, {"8", ".", ".", ".", "6", ".", ".", ".", "3"}, {"4", ".", ".", "8", ".", "3", ".", ".", "1"}, {"7", ".", ".", ".", "2", ".", ".", ".", "6"}, {".", "6", ".", ".", ".", ".", "2", "8", "."}, {".", ".", ".", "4", "1", "9", ".", ".", "5"}, {".", ".", ".", ".", "8", ".", ".", "7", "9"}};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> vec[i][j];
        }
    }
    cout << isValidSudoku(vec);

    return 0;
}