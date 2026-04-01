
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <cstring>
#include <set>
#include <cctype>
#include <unordered_map>

using namespace std;

int maze[100][100];
int dist[100][100];

int y[4] = { -1,1,0,0 };
int x[4] = { 0,0,-1,1 };

int main() 
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    int n, m;
	cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; ++j)
        {
            maze[i][j] = str[j] - '0';
        }
    }

	queue<pair<int, int>> q;

    q.push({ 0,0 });
	dist[0][0] = 1;

    while (!q.empty())
    {
		int Y = q.front().first;
		int X = q.front().second;
		q.pop();

        for (int i = 0; i < 4; ++i)
        {
			int nextY = Y + y[i];
            int nextX = X + x[i];

            if (nextY >= 0 && nextY < n && nextX >= 0 && nextX < m)
            {
                if (maze[nextY][nextX] == 1 && dist[nextY][nextX] == 0)
                {
                    dist[nextY][nextX] = dist[Y][X] + 1;
                    q.push({ nextY,nextX });

                }
			}
        }
    }
	cout << dist[n - 1][m - 1] << "\n";

    return 0;
    
}


