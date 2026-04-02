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


vector<int> v[100];
bool isvisited[100];


int main() 
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
		v[b].push_back(a);
    }

	queue<int> q;
    q.push(1);
	isvisited[1] = true;

	int count = 0;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int next : v[current]) {
            if (!isvisited[next]) {
                isvisited[next] = true;
                q.push(next);
                count++;
            }
        }
    }

	cout << count << "\n";


    return 0;
    
}