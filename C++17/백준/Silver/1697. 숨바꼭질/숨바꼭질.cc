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


int visited[100001];


int main() 
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n, k;
	cin >> n >> k;

    if (n == k)
    {
        cout << 0 << "\n";
        return 0;
    }

	queue<pair<int, int>> q;
	q.push({ n, 0 });
	visited[n] = 1;

    while (!q.empty())
    {
        int current = q.front().first;
        int time = q.front().second;
        q.pop();

        if (current == k)
        {
			cout << time << "\n";
			break;
        }

        int next_pos[3] = { current - 1, current + 1, current * 2 };
        
        for (int i = 0; i < 3; i++)
        {
            int next = next_pos[i];

            if (next >= 0 && next <= 100000 && !visited[next])
            {
                visited[next] = 1;
                q.push({ next, time + 1 });
            }
        }
    }

    return 0;
    
}



