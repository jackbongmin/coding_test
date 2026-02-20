#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <vector>

using namespace std;

void star(int a, int b, int size, vector<string>& board)
{
    if (size == 1)
    {
        board[a][b] = '*';
        return;
    }

    int new_size = size / 3;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (i == 1 && j == 1)
            {
                continue;
            }
            star(a + (i * new_size), b + (j * new_size), new_size, board);
        }
    }
}


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N;
    cin >> N;

    vector<string>board(N, string(N, ' '));
    star(0, 0, N, board);

    for (int i = 0; i < N; ++i)
    {
        cout << board[i] << "\n";
    }

    return 0;
}
 